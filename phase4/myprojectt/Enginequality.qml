import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Dialogs 1.2


Page {
    id: page

    anchors.fill: parent
    Rectangle{
        id:engtype
        anchors.fill: parent
    }

    RadioButton {
        id: radioButton
        x: 62
        y: 75
        text: qsTr("japonese")
        onCheckedChanged: if(checked) {bknd.enginequality(1)}
    }

    RadioButton {
        id: radioButton1
        x: 62
        y: 121
        text: qsTr("iranian")
        onCheckedChanged: if(checked) {bknd.enginequality(2)}
    }

    Text {
        id: element
        x: 62
        y: 48
        color: "#000000"
        text: qsTr("select the quality of your engine")
        font.pixelSize: 17
    }

    Dialog{
        id: dialog1
        Text {
            id: dlg
            text: qsTr("Bought Successfully!")
        }
    }
    Dialog
    {
        id: dialog2
        Text {
            id:dlg2
            text : qsTr("Choose an Option!")
        }
    }

    Connections
    {
        target: bknd
        onNotenoughmoney: dlg.text = "You don't have enough money! \nPlease increase your balance."
        onEnoughmoney: dlg.text = "Bought Successfully!"
    }

    Button {
        id: button
        x: 474
        y: 402
        width: 82
        height: 40
        text: qsTr("Buy")
        onClicked: {
            if(radioButton.checked || radioButton1.checked)
            {
                bknd.makeengine();
                dialog1.open()
                pages.push("Mainmenu.qml")
            }
            else
            {
                dialog2.open();
            }

        }
    }

}

