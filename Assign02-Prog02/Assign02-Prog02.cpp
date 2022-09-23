//Code for Assignment02 Program#2
// Program #2
// You have been given a job as a programmer on a Cyborg supercomputer. In order to accomplish some calculations, you need to know how many bytes the following data types use: char, int, float, and double. You do not have any manuals, so you can’t look this information up. Write a C++ program that will determine the amount of memory used by these types and display the information on the screen.
// • Do not use any numeric literals; use the sizeof function to produce the correct sizes. Sample Output:
// char     1
// int      4
// float    4
// double   8
// Press any key to continue . . .
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "char " << sizeof(char) << "\n";
    cout << "int " << sizeof(int) << "\n";
    cout << "float " << sizeof(float) << "\n";
    cout << "double " << sizeof(double) << "\n";
    
}
