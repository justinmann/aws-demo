import express from "express";
import cppWASM from "./cppController.clist";
import sjWASM from "./sjController.clist";
import fs from "fs";
import jsController from "./jsController";
import fakeService from "./fakeService";

const port = process.env.PORT || 3000;
const app = express();
const NS_PER_SEC = 1e9;

cppWASM.initialize({
    wasmBinary: fs.readFileSync("dist/cppController.wasm")
}).then(cppController => {
sjWASM.initialize({
    wasmBinary: fs.readFileSync("dist/sjController.wasm")
}).then(sjController => {
    app.get("/cpp-hyperscript", (req, res) => {
        cppController.handleRequestHyperscript(req, function(s: string) { res.send(s); }, fakeService);
    });
    app.get("/cpp-string", (req, res) => {
        cppController.handleRequestString(req, function(s: string) { res.send(s); }, fakeService);
    });
    app.get("/cpp-stringstream", (req, res) => {
        cppController.handleRequestStringStream(req, function(s: string) { res.send(s); }, fakeService);
    });
    app.get("/cpp-ping", (req, res) => {
        cppController.handleRequestPing(req, function(s: string) { res.send(s); }, fakeService);
    });
    app.get("/sj-hyperscript", (req, res) => {
        sjController.handleRequestHyperscript(req, function(s: string) { res.send(s); }, fakeService);
    });
    app.get("/sj-string", (req, res) => {
        sjController.handleRequestString(req, function(s: string) { res.send(s); }, fakeService);
    });
    app.get("/js-hyperscript", (req, res) => {
        jsController.handleRequestHyperscript(req, res);
    });
    app.get("/js-handlebars", (req, res) => {
        jsController.handleRequestHandlebars(req, res);
    });
    app.get("/js-string", (req, res) => {
        jsController.handleRequestString(req, res);
    });
    app.get("/js-ping", (req, res) => {
        res.send("ok");
    });
    app.listen(port, () => console.log("Example app listening on port " + port));
});
});

export default app;