//
// Created by AndyB1ance on 2020/2/27.
//
// preprocessor: source-file inclusion, defining macros, conditional compilation
#include "iostream"
using namespace std;
#define myName "AndyB1ance"
#define min(a,b) (a<b?a:b)
#define print(x) #x
#define combine(m,n) m##n

int main(){
    cout << "my name is " << myName << endl;
    int x = 1, y = 2;
    cout << "min(1,2)=" << min(x,y) << endl;
    cout << print(hello world cpp) << endl;
    int xy = 10;
    cout << combine(x,y) << endl;
    return 0;
}

