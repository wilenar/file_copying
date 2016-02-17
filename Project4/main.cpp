#include <iostream>
#include <fstream>
#include <stdio.h>
#include <sstream>
#include <string>

using namespace std;

void CopyingFileStringByString(istream & input_file, ostream & output_file) 
{
	string CopyString;
	while (getline(input_file, CopyString))
	{
		output_file << CopyString;
	}
}

void WrongNumberOfArgumentsMessage()
{
	cout << "Wrong number of arguments check sample!\nSample: project4.exe test1.txt output.txt" << endl;
}

void ManipulationWithFiles(char * argv[])
{
	ifstream InputFile(argv[1]);
	ofstream OutputFile(argv[2]);
	if (InputFile.is_open())
	{
		CopyingFileStringByString(InputFile, OutputFile);
	}
	else
	{
		cout << "Something went wrong..." << endl;
	}
	InputFile.close();
	OutputFile.close();
}

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		WrongNumberOfArgumentsMessage();
	}
	else
	{
		ManipulationWithFiles(argv);
	}
	return 0;
}