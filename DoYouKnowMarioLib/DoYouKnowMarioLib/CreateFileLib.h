#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void createFile(){
	string name;
	string format;
	string fileName;

	cout << "Name to your file (without extension): ";
	getline(cin, name);

	cout << "Now, type a format to your file: ";
	getline(cin, format);

	fileName.append("c:\\");
	fileName.append(name);
	fileName.append(".");
	fileName.append(format);

	cout << "\"" << fileName << "\"" << " was created successfuly on your C:\\ drive." << endl;
	cout << "Press any key to exit." << endl;

	ofstream theFile(fileName);
	theFile.close();

	cin.get();
}