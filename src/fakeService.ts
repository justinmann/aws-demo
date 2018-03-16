import fs from "fs";

const json = fs.readFileSync("src/test.json").toString();

function getData(): string {
    return json;
}

export default {
    getData
};