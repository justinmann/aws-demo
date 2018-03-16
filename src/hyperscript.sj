h(
    childTagName : 'string
    attrs : empty'array!tuple2![string, string]
    children : empty'array!h
    text : empty'string

    render(writer : '#writer)'void {
        writer.write("<")
        writer.write(childTagName)
        ifValid attrs {
            attrs.each(^{
                writer.write(" ")
                writer.write(_.item1)
                writer.write("=\"")
                writer.write(_.item2)
                writer.write("\"")
            })
        }
        writer.write(">")

        ifValid children {
            children.each(^{
                _.render(writer)
            })
        }

        ifValid text {
            writer.write(text)
        }

        writer.write("</")
        writer.write(childTagName)
        writer.write(">")
    }
) { this }