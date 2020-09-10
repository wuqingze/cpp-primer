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

    void test05_vector_initialize_specifield_number_of_elements();
    test05_vector_initialize_specifield_number_of_elements();
    return 0;

    void test04_vector_initialize_specifield_number_of_elements();
    test04_vector_initialize_specifield_number_of_elements();
    return 0;

    void test03_vector_initialize_brace();
    test03_vector_initialize_brace();
    return 0;

    void test02_vector_initialize();
    test02_vector_initialize();
    return 0;

    void test01_initialize();
    test01_initialize();
    return 0;

    void test00_for();
    test00_for();
    return 0;
}

void test00_for(){
    vector<int> intList  = {1,2,3,4,5};

    for(auto i: intList){
        printf("%d", i);
    }
}

void test01_initialize(){
    vector<int> ivec;
    vector<int> ivec2(ivec);
    vector<int> ivec3 = ivec;
    printf("...end\n");
}

void test02_vector_initialize(){
    vector<string> articles = {"a", "an", "the"};
    for(auto s: articles){
        cout<< s<< endl;
    }
}

void test03_vector_initialize_brace(){
    vector<string> stringList {"hello", "world", "wuqingze"};
    for(auto s: stringList){
        cout<<s<<endl;
    }
}

void test04_vector_initialize_specifield_number_of_elements(){
    vector<int> ivec(1000000, -1);
    for(auto i:ivec){
        printf("%d,",i);
    }
    printf("\n");
}

void test05_vector_initialize_specifield_number_of_elements(){
    vector<string> ivec(10, "hi!");
    for(auto i:ivec){
        cout<<i<<endl;
    }
}

