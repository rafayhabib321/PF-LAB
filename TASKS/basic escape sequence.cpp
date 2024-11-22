#include <iostream>
using namespace std;
int main() {
    //  basic escape sequences
    cout << "Hello\n";									//new line
    cout << "This is a tab:\tTabbed!\n";				//tab
    cout << "\\Back slash\\MyApp\n";					//backslash
    cout << "This is, \"Double quote\"\n";				//double quote
    cout << "This will overwrite: Hello\rWorld\n";	    //overwrite
    cout << "This will backspace: Hello\bWorld\n";      //backspace
    cout << "Null terminator: Hello\0World\n"; 		    // Only "Hello" will be printed

    return 0;
}
