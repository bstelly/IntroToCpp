#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream newFile;
	newFile.open("File.txt", ios_base::out);
	if (newFile.is_open())
	{
		newFile << "Brett Stelly" << endl;
	}
	newFile.close;
	char *name;
	newFile.open("File.txt", ios_base::app);
	cin >> name;
	{
		
	}

	

}