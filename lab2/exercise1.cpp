//
// Created by AndyB1ance on 2020/3/1.
//
// lab2 exercise 2: produce the output
//
#include "iostream"
using namespace std;
int main(){
    int x = 10, y = 5;
    cout << "Result:\n";
    cout << "x value y value Expressions   Result\n";
    cout << x << " |    " << y << " |    " << "x=y+3" << "          |x=" << y+3 << endl;
    cout << x << " |    " << y << " |    " << "x=y-2" << "          |x=" << y-2 << endl;
    cout << x << " |    " << y << " |    " << "x=y*5" << "          |x=" << y*5 << endl;
    cout << x << " |    " << y << " |    " << "x=x/y" << "          |x=" << x/y << endl;
    cout << x << " |    " << y << " |    " << "x=x%y" << "          |x=" << x%y << endl;
    return 0;
}

