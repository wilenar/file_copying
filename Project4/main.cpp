#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

void CopyingFileStringByString(istream & inputFile, ostream & outputFile) 
{
	string copyString;
	while (getline(inputFile, copyString))
	{
		outputFile << copyString << endl;
	}
}

void WrongNumberOfArgumentsMessage()
{
	cout << "Wrong number of arguments check sample!\nSample: project4.exe test1.txt output.txt" << endl;
}

void ManipulationWithFiles(char * inputFileName, char * outputFileName)
{
	ifstream inputFile(inputFileName);
	ofstream outputFile(outputFileName);
	if (inputFile.is_open() && outputFile.is_open())
	{
		CopyingFileStringByString(inputFile, outputFile);
	}
	else
	{
		cout << "Something went wrong..." << endl;
	}
	inputFile.close();
	outputFile.close();
}

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		WrongNumberOfArgumentsMessage();
	}
	else
	{
		ManipulationWithFiles(argv[1],argv[2]);
	}
	return 0;
}