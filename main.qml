import QtQuick 2.0
import QtQuick.Controls 2.5

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Carpenter App")

    StackView {
        id: mystack
        initialItem: "Home.qml"
        anchors.fill: parent
    }
}
