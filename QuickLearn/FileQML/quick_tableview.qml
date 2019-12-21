  import QtQuick 2.12
  import QtQuick.Controls 1.4
Rectangle {
	width:400
	height:400
	TableView {
	  anchors.fill: parent
	  columnSpacing: 1
	  rowSpacing: 1
	  clip: true

	  model:  ListModel {
        id: libraryModel
        ListElement {
            title: "A Masterpiece"
            author: "Gabriel"
        }
        ListElement {
            title: "Brilliance"
            author: "Jens"
        }
        ListElement {
            title: "Outstanding"
            author: "Frederik"
        }
		TableViewColumn {
            role: "title"
            title: "Title"
            width: 100
        }
        TableViewColumn {
            role: "author"
            title: "Author"
            width: 200
        }
    }

	  delegate: Rectangle {
		  implicitWidth: 100
		  implicitHeight: 50
		  Text {
			  text: "nihao"
		  }
	  }
	  
  }
}