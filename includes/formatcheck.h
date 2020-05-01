#include <iostream>
#include <string>

using namespace std;
bool check_file_format(string filename)
{
  string fn = filename;
  if(fn.substr(fn.find_last_of(".") + 1) == "pow") {
    return true; 
  } else {
    return false;
  }
}
