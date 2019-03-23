#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ofstream fout("Pretty_Picture.svg");

	fout << "<svg width=\"300\" height=\"300\" xmlns=\"http://www.w3.org/2000/svg\">\n";

	system("pause");
	return 0;
}