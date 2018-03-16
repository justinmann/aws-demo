import express from "express";
import wasm from "./foo.clist";
import fs from "fs";

const port = process.env.PORT || 3000;
const app = express();

const data = fs.readFileSync("dist/foo.wasm");
const fooModule = {
    wasmBinary: data
};

wasm.initialize(fooModule).then(fooModule => {
    app.get("/wasm", (req, res) => {
        fooModule.handleRequest(req, function(s: string) { res.send(s); });
    });
    app.use(express.static("public"));
    app.listen(port, () => console.log("Example app listening on port " + port));
});

export default app;