import fs from "fs";

const json = fs.readFileSync("test.json").toString();

function getData(): string {
    return json;
}

export default {
    getData
};