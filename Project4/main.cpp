#include <iostream>
#include <fstream>
#include <string>
#include "fstream"

using namespace std;

int main(int argc, char* argv[])
{
	ifstream inputFile;
	ofstream outputFile;
	string str;

	if (argc != 3)// ���� �������� ���������, �� argc ����� ������ 1(� ����������� �� ���-�� ����������)
	{
		cout << argv[1] << endl;// ����� ������ ������ �� ������� ���������� �� ������(��������� � ������� ���������� � 0 )
	}
	else
	{
		cout << "Something is wrong..." << endl;
	}
	system("pause");


	if (inputFile)
	{
		while (!inputFile.eof())
		{
			getline(inputFile, str);
			outputFile << str << endl;
		}
	}

	inputFile.close();
	outputFile.close();

	return 0;
}