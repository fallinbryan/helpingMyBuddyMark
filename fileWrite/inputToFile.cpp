#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main ()
{
    ofstream infile;				// Create a File object for writing; this has some internal magic
    infile.open("CSC2134N.TXT");    // open a file for writing, if the file does not exist, it will be created
	string input = "dummy";			// Create a string object with some dummy string
    while (input.length() > 0) {    // without a dummy string, input.length() would equal 0, and the loop would be skipped
    	cout << "Type Some Stuff: ";
		getline(cin,input);			// get some input from the terminal with cin and shove it into input string object
		infile << input << endl;	// inject the contents of the input string object into the open file; ie. write to file
    }
        
    infile.close();					// always close the file, bad juju to leave file open 
    return 0;
}
