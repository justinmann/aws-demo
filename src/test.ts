import "mocha";
import { expect } from "chai";
import supertest from "supertest";
import app from "./app";

const request = supertest(app);

describe("Tests app", function() {
  it("verifies get", function(done) {
    request.get("/").expect(200).end(function(err, result) {
      expect(result.text).to.contain("Congratulations");
      expect(result.get("content-type")).to.contain("text/html");
      done(err);
    });
  });
});
