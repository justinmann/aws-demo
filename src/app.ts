import express from "express";

const port = process.env.PORT || 3000;

const app = express();
app.get("/hello", (req, res) => res.send("Hello World!"));
app.use(express.static("public"));
app.listen(port, () => console.log("Example app listening on port " + port));