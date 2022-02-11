import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Dialogs 1.2

Page {
    anchors.fill: parent

    Grid
    {
        anchors.centerIn: parent
        spacing: 3
        columns: 2
        RoundButton
        {
            id: buywingmirror
            width: 50
            height: 50
            radius: 5

            Image
            {
                anchors.fill: parent
                id: mirrorim
                source: "/../../Desktop/wingm.jpg"
            }
            onClicked: {
                pages.push("Wingmirrorquality.qml")
            }

        }

        Text
        {
            id: buywingmirrortxt
            text: "Buy a wing mirror"
        }


        RoundButton
        {
            id: buyengine
            width: 50
            height: 50
            radius: 5
            Image
            {
                anchors.fill: parent
                id: engineimg
                source: "/../../Desktop/engine.jpg"
            }
            onClicked: pages.push("Enginestreangth.qml")
        }

        Text
        {
            id: enginetxt
            text: "Buy an engine"
        }


        RoundButton
        {
            id:allbought
            width:50
            height:50
            radius:5
            Image
            {
                anchors.fill:  parent
                id:allboughtimage
                source: "/../../Desktop/alltools.jpg"
            }
            onClicked: pages.push("Stuffbought.qml")
        }

        Text
        {
            id: allboughttext
            text: "everything i bought so far"
        }

        RoundButton
        {
            id:exit
            width: 50
            height: 50
            radius: 5
            Image
            {
                anchors.fill: parent
                id:exitimage
                source: "/../../Desktop/exit.png"
            }
            onClicked: bknd.ext();
        }


        Text
        {
            id: exittext
            text: "Exit"
        }


    }


    Button{
        id:myb
        text: "add money"
        x:7
        y:380
        width: 85
        height: 30
        onClicked: {
            pages.push("increase.qml")
        }
    }

    Image {
        id: imgg
        x: 8
        y: 410
        width: 43
        height: 39
        source: "/../../Desktop/coin.png"
        fillMode: Image.PreserveAspectFit

    }
    Text {
        id: element
        x: 54
        y: 425
       text: qsTr(bknd.get_money_left())
        font.pixelSize: 12
    }

}
