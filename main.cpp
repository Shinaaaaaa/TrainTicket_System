#include <iostream>
#include "program.h"
using namespace std;

int main() {
    std::string command;

//    freopen("data/basic_4/4.in" , "r" , stdin);
//    freopen("data/basic_4/4ans.txt" , "w" , stdout);
    Init();
    while(getline(cin , command)){
        try{
            Run(command);
        }
        catch (...){
            std::cout << "-1\n";
        }
    }
}
