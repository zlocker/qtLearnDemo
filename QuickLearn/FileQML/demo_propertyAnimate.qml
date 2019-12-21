  import QtQuick 2.12
  Rectangle {
      id: rect
      width: 100; height: 100
      color: "red"

	ColorAnimation on color { 
	loops: Animation.Infinite
	alwaysRunToEnd :true
	from: "red"
	to: "white"; duration: 500 }
 }
