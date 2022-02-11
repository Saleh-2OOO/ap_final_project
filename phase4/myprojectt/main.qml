import QtQuick 2.12
import QtQuick.Controls 2.5

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "Mechanic App!"

    StackView
    {
        id:pages
        initialItem:  "Login.qml"
        anchors.fill: parent
    }


}
