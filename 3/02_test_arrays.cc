#include <stdio.h>
#include <vector>
#include <iostream>

// using declarations for names from the standard library
using std::cin;
using std::vector;
using std::string;
using std::toupper;
using std::cout; using std::endl;

int main(){

    void test03_array_negative_subscript();
    test03_array_negative_subscript();
    return 0;

    void test02_reference(int *i);
    int i = 1;
    printf("before foo i:%d\n", i);
    test02_reference(&i);
    printf("after foo i:%d\n", i);
    return 0;

    void test01_arrays_special();
    test01_arrays_special();
    return 0;

    void test00_string_array();
    test00_string_array();
    return 0;
}

void test00_string_array(){
    unsigned cnt = 24;
    string bad[cnt];
    printf("...end\n");
}

void test01_arrays_special(){
    const char a4[6] = "Danie"; // error: no space for the null!
}

void test02_reference(int *i){
    *i = 1024;
}

void test03_array_negative_subscript(){
    int p[] = {1,2};
    printf("p[0]:%d\n", p[0]);
    printf("p[1]:%d\n", p[1]);
    printf("p[-1]:%d\n", p[-1]);
}
