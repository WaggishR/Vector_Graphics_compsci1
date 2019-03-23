//John Klepeis 3/22/2019
//this program outputs a svg file using 3 loops to create a pattern/design somewhat resembling a sunset 

#include <iostream>
#include <fstream> //needed for files
using namespace std;

int main() {
	//circles
	int circlecolor = 229;//starting circle color
	int circlex = 25;//circle starting x coordinate
	int circley = 25;//circle starting y coordinate
	//rectangle
	int rectcolor = 255; //used to manipulate background color
	int recty = 0; //starting rectangle y coordinate

	//lines
	int liney=0;//line y coordinate
	
	ofstream fout("Sunset.svg"); //create output file

	fout << "<svg width=\"300\" height=\"300\" xmlns=\"http://www.w3.org/2000/svg\">\n"; //needed in all svg files, and determines canvas size

	for (int i = 0; i < 6; i++) {//backgroudnd rectangles changing colors
		fout << "<rect x=\"0\" y=\""<<recty<<"\" width=\"300\" height=\"50\" style = \"fill:rgb(0,0,"<<rectcolor<<")\"/>\n";
		rectcolor -= 42.5;//changes color
		recty += 50; //changes y coordinate to cover whole canvas with rectangles
	}

	while(liney<300) {//create horizontal lines seperating rectangles
		fout << "<line x1=\"0\" y1=\""<<liney<<"\" x2=\"300\" y2=\""<<liney<<"\" style=\"stroke:rgb(192, 208, 232); stroke - width:4\" />\n";
		liney += 50; //moves line on y axis to line up with edges of rectangles
	}

	for (int i = 0; i < 6; i++) {//circles
		fout << "<circle cx = \""<<circlex<<"\" cy = \""<<circley<<"\" r = \"25\" style =\" stroke:red; stroke-width:3; fill:rgb(255,"<<circlecolor<<",0)\"/>\n";
		circlex += 50; //moves circle on x axis
		circley += 50; //moves circle on y axis
		circlecolor -= 29; //changes color
	}

	fout<< "</svg>";
	return 0;
}