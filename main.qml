import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
import DataBaseHandler 1.0
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    DataBaseHandler{
        id: dbHandler
    }

    Rectangle{
        anchors.fill:     parent
        anchors.margins:  parent.height * 0.05
        border.color:     "black"
        radius:          height / 8

        Button{
            text: "Get"
            onClicked: {
                // dbHandler.connectDB()
                console.log("connectDB")
            }
        }
    }
}
