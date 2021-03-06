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

    void test10_vector_initialize_struct();
    test10_vector_initialize_struct();
    return 0;

    void test09_vector_copy();
    test09_vector_copy();
    return 0;

    void test08_vector_pushback();
    test08_vector_pushback();
    return 0;

    void test07_NULL();
    test07_NULL();
    return 0;

    void test06_vector_initialize_struct();
    test06_vector_initialize_struct();
    return 0;

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

struct People{
    string name;
    int age;
    string ginder;
    struct University{
        string name;
        bool is985;
    } school;
};

/**
 * 目前常见写法仅支持浅程拷贝
 * */
void test06_vector_initialize_struct(){
    People man;
    man.name = "wuqingze";
    man.age = 23;
    man.ginder = "man";
    man.school.name = "East China Normal University";
    man.school.is985 = true;

    vector<People> peoples(10, man);
    for(auto p:peoples){
        cout<<"name:"<<p.name<<","<<"age:"<<man.age<<","<<"ginder:"<<man.ginder;
        cout<<"--school.name:"<<man.school.name<<", school.is985:"<<man.school.is985<<endl;
    }
    cout<<"-----------------"<<endl;
    peoples[0].name[0] = 'G';
    for(auto p:peoples){
        cout<<"name:"<<p.name<<","<<"age:"<<man.age<<","<<"ginder:"<<man.ginder<<endl;
        cout<<"--school.name:"<<man.school.name<<", school.is985:"<<man.school.is985<<endl;
    }
}

void test07_NULL(){
    People *man;
    if(man == NULL){
        printf("man is null\n");
    }else{
        printf("man is not null\n");
    }
}

void test08_vector_pushback(){
    vector<int> v2;
    for(int i=0;i<100;i++){
        v2.push_back(i);
    }
    for(auto i:v2){
        printf("%d,",i);
    }
    printf("\n");
}

void test09_vector_copy(){
    People man;
    man.name = "wuqingze";
    man.age = 23;
    man.ginder = "man";
    man.school.name = "East China Normal University";
    man.school.is985 = true;

    vector<People> peoples(10, man);
    vector<People> peoples1 = peoples;
    peoples1[0].name[0] = 'G';

    for(auto p:peoples){
        cout<<"name:"<<p.name<<","<<"age:"<<man.age<<","<<"ginder:"<<man.ginder;
        cout<<"--school.name:"<<man.school.name<<", school.is985:"<<man.school.is985<<endl;
    }
    cout<<"-----------------"<<endl;
    for(auto p:peoples1){
        cout<<"name:"<<p.name<<","<<"age:"<<man.age<<","<<"ginder:"<<man.ginder<<endl;
        cout<<"--school.name:"<<man.school.name<<", school.is985:"<<man.school.is985<<endl;
    }
}

void test10_vector_initialize_struct(){
    People man;
    man.name = "wuqingze";
    man.age = 23;
    man.ginder = "man";
    man.school.name = "East China Normal University";
    man.school.is985 = true;

    vector<People> peoples(10, man);
    for(auto p:peoples){
        cout<<"name:"<<p.name<<","<<"age:"<<man.age<<","<<"ginder:"<<man.ginder;
        cout<<"--school.name:"<<man.school.name<<", school.is985:"<<man.school.is985<<endl;
    }
    cout<<"-----------------"<<endl;
    string &xx = man.school.name = "tsinghua university";
    for(auto p:peoples){
        cout<<"name:"<<p.name<<","<<"age:"<<man.age<<","<<"ginder:"<<man.ginder<<endl;
        cout<<"--school.name:"<<man.school.name<<", school.is985:"<<man.school.is985<<endl;
    }
}
