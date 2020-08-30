import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Window 2.12

ApplicationWindow {
    visible: true
	title: qsTr("IP Checker")
	ColumnLayout {
		anchors.fill: parent
        Label {
			text: backend.ip
			horizontalAlignment: Text.AlignHCenter
			verticalAlignment: Text.AlignVCenter
			Layout.fillWidth: true
			Layout.fillHeight: true
        }
        Button {
			text: "Get IP"
			onClicked: backend.buttonClicked()
			Layout.fillWidth: true
			Layout.fillHeight: true
		}
    }
}
