#include <iostream>
using std::string;
using std::cout;

int main(){
    std::cout<<"hello world\n"<<std::endl;
    std::string s1 = "hello1";
    std::cout<<"s1:" << s1 << std::endl;
    std::string s2 = s1;
    //char &c = s2[0];
    //c = 'H';
    s2[0] = '-';
    std::cout<<"s1:" << s1 << std::endl;
    std::cout<<"s2:" << s2 << std::endl;
    std::cout<<"s2.size:" << s2.size() << std::endl;
    string s3 = string(1024, 'a');
    std::cout<<"s3:" << s3 << std::endl;
    std::cout<<"s3.size:" << s3.size() << std::endl;
    return 0;
}
