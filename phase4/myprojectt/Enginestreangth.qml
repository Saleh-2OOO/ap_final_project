import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Dialogs 1.2


Page {
    id: page

    anchors.fill: parent
    Rectangle{
        id:mirrorquality
        anchors.fill: parent
    }

    RadioButton {
        id: radioButton
        x: 62
        y: 75
        text: qsTr("weak")
        onCheckedChanged: if(checked) {bknd.enginestreangth(1)}

    }

    RadioButton {
        id: radioButton1
        x: 62
        y: 121
        text: qsTr("medium")
        onCheckedChanged: if(checked) {bknd.enginestreangth(2)}
    }

    RadioButton {
        id: radioButton2
        x: 62
        y: 167
        text: qsTr("high")
        onCheckedChanged: if(checked) {bknd.enginestreangth(3)}
    }

    Text {
        id: element
        x: 62
        y: 48
        color: "#000000"
        text: qsTr("how powerfull you want your engine to be?")
        font.pixelSize: 17
    }

    Button {
        id: button
        x: 474
        y: 402
        width: 82
        height: 40
        text: qsTr("Next")
        onClicked:{

            if(radioButton.checked || radioButton1.checked || radioButton2.checked)
            {
                pages.push("Enginequality.qml")
            }
            else
            {
                dialog1.open();
            }

        }
    }
    Dialog{
        id: dialog1
        Text {
            id: dlg
            text: qsTr("Choose an option!")
        }
    }

}

