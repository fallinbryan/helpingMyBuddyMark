#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main ()
{
    int number;
    float value;
    ofstream infile;
    infile.open("CSC2134N.TXT");
	string input = "dummy";
    while (input.length() > 0) {
    	cout << "Type Some Stuff: ";
		getline(cin,input);
		infile << input << endl;
    }
        
    infile.close();
    return 0;
}
