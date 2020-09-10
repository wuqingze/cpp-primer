#include <stdio.h>
#include <iostream>

// using declarations for names from the standard library
using std::cin;
using std::string;
using std::toupper;
using std::cout; using std::endl;

int main()
{
    string s = "hello world";
    for(char &c: s){
        c = toupper(c);
        printf("%c", c);
    }
    printf("\n");
    return 0;
}
