#include <cstdio>
#include <iostream>
#include <fstream>

using namespace std;

class Road {
public:
	double length;
	int width;
	Road();
	Road(double newLenght, int newWidth);
	void out() {
		cout << "Length: " << length << endl;
		cout << "Width: " << width << endl;
	}
	void in() {
		ifstream file;
		file.open("text.txt");
		if (file.is_open()) {
			file >> length >> width;
		}
		else {
			cout << "Open failed" << endl;
		}
		file.close();
	}
};	

Road::Road() {
	length = 0;
	width = 0;
}

Road::Road(double newLenght, int newWidth) {
	length = newLenght;
	width = newWidth;
}


int main() {
	setlocale(LC_ALL, "rus");
	Road road(888.8, 8);
	cout << "Before access: \n";
	road.out();
	road.in();
	road.out();

	return 0;
}