import express from "express";
import fakeService from "./fakeService";
import h from "hyperscript";

function handleRequest(req: express.Request, res: express.Response): void {
    const raw = fakeService.getData();
    const json = JSON.parse(raw);
    res.send(
        h("div", { class: "list" },
            (json["people"] as Array<any>).map(x => h("div", { class: "person"}, h("span", {}, x["name"])))
        ).outerHTML
    );
}

export default {
    handleRequest
};