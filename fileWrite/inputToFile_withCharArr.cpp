#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
// A C String is a special type of array in C++, it is handled a little differently than standard arrays
// for example, when you input some text into a C String, the compiler will automagically inject a NULL character
// at the end of the text.  This allows functions like strlen to work by simply counting the number of elements in
// the C String array until it encounter the NULL character
int main ()
{
    ofstream infile;					// Create a file object for writing
    infile.open("CSC2134N.TXT");		// open a file, if file does not exist, file will be created
	char input[40];						// Create a character array max size of 40, also known as a C String
    do {								// do some stuff
    	cout << "Type Some Stuff: ";		
		cin.getline(input,40);				// use cin to write some data into the C String,  don't go over 40 character 
		infile << input << endl;			// inject the C String into the open file, ie write to file
    } while (strlen(input) > 0);			// while the length of the input is > 0, keep on doing some stuff
        
    infile.close();						// always close your open file, bad juju to leave a file open
    return 0;
}
