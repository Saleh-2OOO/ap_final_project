import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Dialogs 1.2

Page {
    anchors.fill: parent
    Rectangle{
        id: boughtcarlights
        anchors.fill: parent
        Rectangle
        {
            color: "white"
            x: 125
            y: 0
            width: 407
            height: 480

        }

        ScrollView {
            id: scrollView
            x: 132
            y: 83
            width: 392
            height: 341
            Text {
                id: element
                x: 0
                y: 0
                text: qsTr(bknd.showmystuff())
                font.pixelSize: 12
            }
        }
        Text {
            id: element1
            x: 20
            y: 25
            text: qsTr("all the stuff that i bought so far, in order of my purchase")
            font.pixelSize: 20
        }
        Button {
            id: button
            x: 474
            y: 402
            width: 82
            height: 40
            text: qsTr("OK")
            onClicked: pages.push("Mainmenu.qml")
        }
    }


}
