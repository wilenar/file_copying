#include "iostream"
#include "fstream"
#include "conio.h"

using namespace std;

int main()
{

	ifstream inputFile;
	ofstream outputFile;
	char inputFileName[255];
	char outputFileName[255];

	cout << "Write input file name: ";
	cin >> inputFileName;

	cout << "Write output file name: ";
	cin >> outputFileName;

	inputFile.open(inputFileName);
	outputFile.open(outputFileName);

	char buffer[1000];

	while (!inputFile.eof())
	{
		inputFile.getline(buffer, sizeof(buffer));
		outputFile << buffer << endl;
	}

	inputFile.close();
	outputFile.close();

	return 0;
}