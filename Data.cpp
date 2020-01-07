#include "Data.h"



Data::Data()
{
}


Data::~Data()
{
}

void Data::records(const char * fileName)
{

	file.open("library.dat", std::ios::in | std::ios::binary);
	if (file.is_open())
	{
		file.read((char*)&buffer, sizeof(Data));
		file.close();
	}
	else
	{
		fileTwo.open("library.txt", std::ios::out);
		fileTwo.close();
		if (!fileTwo.is_open())
		{
			std::cerr << "File not found." << endl;
			
		}
		else
		{
			fileTwo.open("library.txt", std::ios::in);
			getline(fileTwo, buffer);
			
			cout << buffer << endl;
			fileTwo.close();


	
		}
	}
}

void Data::saveRecords(const char * filename)
{
	file.open("library.dat", ios::out | ios::binary);
	file.write((char*)&buffer, sizeof(Data));
	file.close();
}

void Data::updateRecords(const char * filename)
{
	file.open(filename, ios::out | ios::binary);
}

