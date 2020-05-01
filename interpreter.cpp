#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;
int main(int argc, char *argv[])
{
	string line;
	ifstream codefile (argv[1]);
	
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
					cout << "[LineError] you can't use '/' with '+' or '-'\n";
				} else {
					if (strokenum == 1)
					{
						cout << " ";
					} else if (strokenum == 2) {
						cout << "\n";
					} else {
						cout << "\n";
						cout << "[LineError] Unknow '/' command\n";
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
