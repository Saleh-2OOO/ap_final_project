import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Dialogs 1.2


Page {
    anchors.fill: parent


    Rectangle{
        id: incrementbalancee
        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0
        anchors.fill: parent
        }
        Image
        {
            id: coinimg
            anchors.rightMargin: 0
            anchors.bottomMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 0
            source: "/../../Desktop/coin.png"
            anchors.fill: parent
            anchors.top: welcome.bottom
        }

        TextField {
            id: textField
            x: 220
            y: 220
            placeholderText: "Enter Here"
        }

        Text {
            id: inc
            x: 83
            y: 45
            width: 337
            height: 34
            text: qsTr("How much money do you have?")
            font.pixelSize: 20
        }

        Dialog{
            id: dialog1
            Text {
                id: text1
            }
        }

        Button
        {
            id: incbutton
            x: 474
            y: 371
            text: "Add"

            onPressed:
            {
                if(bknd.incmoney(textField.text))
                {
                    text1.text = "you have successfully add money to your acount"
                    dialog1.open()
                    pages.push("Mainmenu.qml")
                }
                else
                {
                    text1.text = "Please enter a valid number"
                    dialog1.open()
                }
                }
            }
        }






