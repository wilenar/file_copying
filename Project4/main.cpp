#include <iostream>
#include <fstream>
#include <string>
#include "fstream"

using namespace std;

int main(int argc, char* argv[])
{

	ifstream inputFile("input.txt");
	ofstream outputFile("output.txt");
	string str;
	if (inputFile && outputFile)
	{
		while (!inputFile.eof())
		{
			getline(inputFile, str);
			outputFile << str << endl;
		}
	}
	else outputFile << ("File not found");
	inputFile.close();
	outputFile.close();

	return 0;
}