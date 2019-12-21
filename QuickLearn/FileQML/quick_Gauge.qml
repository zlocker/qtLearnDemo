  import QtQuick 2.2
  import QtQuick.Controls 1.4
  import QtQuick.Controls.Styles 1.4
  import QtQuick.Extras 1.4

  Rectangle {
      width: 40
      height: 200
	  color: "white"

      Timer {
          running: true
          repeat: true
          interval: 2000
          onTriggered: gauge.value = gauge.value == gauge.maximumValue ? 5 : gauge.maximumValue
      }

      Gauge {
          id: gauge
          anchors.centerIn: parent
          anchors.margins: 10

          value: 5
          Behavior on value {
              NumberAnimation {
                  duration: 1000
              }
          }

          style: GaugeStyle {
              valueBar: Rectangle {
                  implicitWidth: 16
                  color: "#64b8ff"
              }
			  background:Rectangle{
				  anchors.fill: parent
				  color: "#646464"
			  }
			    
			minorTickmark: Item {
				  implicitWidth: 10
				  implicitHeight: 1

				  Rectangle {
					  color: "#5a5a5a"
					  anchors.fill: parent
					  anchors.leftMargin: 2
					  anchors.rightMargin: 4
				  }
			  }
			tickmark: Item {
			  implicitWidth: 20
			  implicitHeight: 1

			  Rectangle {
				  color: "#5a5a5a"
				  anchors.fill: parent
				  anchors.leftMargin: 3
				  anchors.rightMargin: 3
			  }
			}
          }
      }
  }