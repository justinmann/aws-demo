import express from "express";
import fakeService from "./fakeService";
import h from "hyperscript";
import handlebars from "handlebars";

function handleRequestHyperscript(req: express.Request, res: express.Response): void {
    const raw = fakeService.getData();
    const json = JSON.parse(raw);
    res.send(
        h("div", { class: "list" },
            (json["people"] as Array<any>).map(x => h("div", { class: "person"}, h("span", {}, x["name"])))
        ).outerHTML
    );
}

const template = handlebars.compile(`
<div class="list">
  {{#each people}}
  <div class="person"><span>{{name}}</span></div>
  {{/each}}
</div>`);

function handleRequestHandlebars(req: express.Request, res: express.Response): void {
    const raw = fakeService.getData();
    const json = JSON.parse(raw);
    res.send(template(json));
}

function handleRequestString(req: express.Request, res: express.Response): void {
    const raw = fakeService.getData();
    const json = JSON.parse(raw);

    let s = "";
    s += "<div class=\"list\">";

    (json["people"] as Array<any>).forEach(x => {
        s += "<div class=\"person\">";
        s += "<span>" + x["name"] + "</span>";
        s += "</div>";
    });

    s += "</div>";

    res.send(s);
}

export default {
    handleRequestHyperscript,
    handleRequestHandlebars,
    handleRequestString
};