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
	char input[40];	
    do {
    	cout << "Type Some Stuff: ";
		cin.getline(input,40);
		infile << input << endl;
    } while (strlen(input) > 0);
        
    infile.close();
    return 0;
}
