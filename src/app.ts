import express from "express";
import wasm from "./foo.clist";
import fs from "fs";

const data = fs.readFileSync("dist/foo.wasm");
const fooModule = {
    wasmBinary: data
};

wasm.initialize(fooModule).then(module => {
    module.asm._sayHello();
});

const port = process.env.PORT || 3000;

const app = express();
app.get("/hello", (req, res) => res.send("Hello World!"));
app.use(express.static("public"));
app.listen(port, () => console.log("Example app listening on port " + port));

export default app;