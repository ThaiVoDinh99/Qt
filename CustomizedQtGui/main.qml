import QtQuick

Item {
    id: rootWindow
    width: 600
    height: 600

    Rectangle {
        id: buttomItem
        width: 200
        height: 200
        color: "red"
        anchors.centerIn: parent
        MouseArea {
            id: mouseId
            anchors.fill: parent
            onClicked: {
                console.log("thaivodinh")
                customModel.trigger
            }
        }
    }
}