#include <cstddef>
#include <iostream>
using std::size_t;
using std::cin;
using std::cout;
using std::endl;

int main(){
    size_t v1, v2;
    while(cin >> v1 >> v2){
        cout<< "v1:" << v1 << endl;
        cout<< "v2:" << v2 << endl;
        cout<< "v1 + v2:" << v1+v2 << endl;
        cout << "---------------------" << endl;
    }
    return 0;
}

