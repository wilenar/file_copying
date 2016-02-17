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

	if (argc != 3)// если передаем аргументы, то argc будет больше 1(в зависимости от кол-ва аргументов)
	{
		cout << argv[1] << endl;// вывод второй строки из массива указателей на строки(нумерация в строках начинается с 0 )
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