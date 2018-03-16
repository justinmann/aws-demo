import express from "express";
import cppWASM from "./cppController.clist";
import fs from "fs";
import jsController from "./jsController";
import fakeService from "./fakeService";

const port = process.env.PORT || 3000;
const app = express();
const NS_PER_SEC = 1e9;

cppWASM.initialize({
    wasmBinary: fs.readFileSync("dist/cppController.wasm")
}).then(cppController => {
    app.get("/cpp", (req, res) => {
        const start = process.hrtime();

        cppController.handleRequest(req, function(s: string) { res.send(s); }, fakeService);

        const delta = process.hrtime(start);
        console.log(`${delta[0] * NS_PER_SEC + delta[1]}ns`);
    });
    app.get("/js", (req, res) => {
        const start = process.hrtime();

        jsController.handleRequest(req, res);

        const delta = process.hrtime(start);
        console.log(`${delta[0] * NS_PER_SEC + delta[1]}ns`);
    });
    app.listen(port, () => console.log("Example app listening on port " + port));
});

export default app;