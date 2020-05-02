#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

#include "includes/formatcheck.h"

using namespace std;
int main(int argc, char *argv[])
{
	cout << "Pow Language V1.0 Interpreter \n";
	cout << "--------------------------------\n";
	string line;
	ifstream codefile (argv[1]);

	// checks if there's 2 arguments
	if (argc == 2)
	{
		bool isPowlFile = check_file_format(argv[1]); // check if the file is in ".pow" format
		
		// the condition of check_file_format if not met
		if (!isPowlFile)
		{
			cout << "[FileError] File '" << argv[1] << "' is not in .powl format\n";
			exit(1);
		}
		
		if (codefile.is_open())
	  	{
			while ( getline (codefile, line) )
			{
				
				// counting the + / - characters
				size_t plusnum = count(line.begin(), line.end(), '+');
				size_t minusnum = count(line.begin(), line.end(), '-');
				size_t strokenum = count(line.begin(), line.end(), '/');

				if (strokenum > 0)
				{
					if (plusnum > 0 || minusnum > 0)
					{
						cout << "\n";
						cout << "[StrokeError] you can't use '/' with '+' or '-'\n";
					} else {
						if (strokenum == 1)
						{
							cout << " ";
						} else if (strokenum == 2) {
							cout << "\n";
						} else {
							cout << "\n";
							cout << "[StrokeError] Unknow '/' command\n";
						}
					}
				}
				// the ASCII total int
				int linetotal = plusnum * 3 - minusnum;
				// Converting ASCII deciamls to characters
				char character = static_cast<char>(linetotal);



				cout << character;
			}
			codefile.close();
			cout << "\n";
	  	}
		
		else 
		{
			cout << "Unable to open file " << argv[1] << "\n";
		}
	} 
	else if (argc > 2)
	{
		// checks if there's more than 2 arguments
		// and returns and error
		cout << "[OptionError] There is no option called " << argv[2] << "\n";
	} else 
	{
		// checks if arguments is less than 2
		// that means that the file is not provided
		cout << "[FileError] File is not provided \n";
	}
	

	
	
}
