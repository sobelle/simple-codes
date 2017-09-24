#include <cstring>
#include <iostream>
using namespace std;

void strReverse(char*);


int main() {

	char* line;
	int size;

	line = new char[size];

	cout << "Enter the size of your string: ";
	cin >> size;
	cout << size << endl;

	cout << "Enter your string: ";
	cin.ignore();
	cin.getline(line, size + 1);
	cout << line << endl;

	strReverse(line);
	
	cout << "Reversed string: ";
	cout << line << endl;

	delete[] line;

	return 0;
}


void strReverse(char* line) {

	int length;
	length = strlen(line);

	for (int i = 0; i < length / 2; i++)
		swap(line[i], line[length - i - 1]);

}