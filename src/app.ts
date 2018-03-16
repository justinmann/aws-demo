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
        const start = process.hrtime();

        cppController.handleRequestHyperscript(req, function(s: string) { res.send(s); }, fakeService);

        const delta = process.hrtime(start);
        // console.log(`${delta[0] * NS_PER_SEC + delta[1]}ns`);
    });
    app.get("/cpp-string", (req, res) => {
        const start = process.hrtime();

        cppController.handleRequestString(req, function(s: string) { res.send(s); }, fakeService);

        const delta = process.hrtime(start);
        // console.log(`${delta[0] * NS_PER_SEC + delta[1]}ns`);
    });
    app.get("/sj-hyperscript", (req, res) => {
        const start = process.hrtime();

        sjController.handleRequestHyperscript(req, function(s: string) { res.send(s); }, fakeService);

        const delta = process.hrtime(start);
        console.log(`${delta[0] * NS_PER_SEC + delta[1]}ns`);
    });
    app.get("/sj-string", (req, res) => {
        const start = process.hrtime();

        sjController.handleRequestString(req, function(s: string) { res.send(s); }, fakeService);

        const delta = process.hrtime(start);
        // console.log(`${delta[0] * NS_PER_SEC + delta[1]}ns`);
    });
    app.get("/js-hyperscript", (req, res) => {
        const start = process.hrtime();

        jsController.handleRequestHyperscript(req, res);

        const delta = process.hrtime(start);
        // console.log(`${delta[0] * NS_PER_SEC + delta[1]}ns`);
    });
    app.get("/js-handlebars", (req, res) => {
        const start = process.hrtime();

        jsController.handleRequestHandlebars(req, res);

        const delta = process.hrtime(start);
        // console.log(`${delta[0] * NS_PER_SEC + delta[1]}ns`);
    });
    app.get("/js-string", (req, res) => {
        const start = process.hrtime();

        jsController.handleRequestString(req, res);

        const delta = process.hrtime(start);
        // console.log(`${delta[0] * NS_PER_SEC + delta[1]}ns`);
    });
    app.listen(port, () => console.log("Example app listening on port " + port));
});
});

export default app;