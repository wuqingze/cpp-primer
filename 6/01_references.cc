#include <stdio.h>
#include <iostream>
using namespace std;

void change(int &i){
    i = 1024;
}

void _change(int *i){
    *i = 1024;
}

int main(){
    int v;
    while(cin >> v){
        printf("orig:%d\n", v);
//        change(v);
        _change(&v);
        printf("aftr:%d\n", v);
        printf("------\n");
    }

    return 0;
}
