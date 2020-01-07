#pragma once
#include <iostream>
#include <fstream>
#include <string>


using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::fstream;
using std::ios;
using std::getline;

class Data
{
public:
	Data();
	~Data();

	void records(const char * fileName);
	void saveRecords(const char * filename);
	void findRecords(const char * filename);
	void updateRecords(const char * filename);

	string buffer;


	fstream file;
	fstream fileTwo;

	


};

struct LibraryData
{
	string datLib[6];

	string callNumber = datLib[0];
	string title = datLib[1];
	string author = datLib[2];
	string bookStatus = datLib[3];
	string dueDate = datLib[4];
	string borrower = datLib[5];
};

