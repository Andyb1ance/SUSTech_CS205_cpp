//
// Created by AndyB1ance on 2020/2/27.
//
// function: prototype and definition
//

#include "iostream"
#include "cmath"
double myPow(double,int);
using namespace std;

int main(){
    cout << "enter a number: ";
    double num;
    cin >> num;
    cout << "cmath function pow() result: "<< pow(num,2) << endl;
    cout << "user-defined function myPow() result: " << myPow(num,2) << endl;
    return 0;
}

double myPow(double num,int times){
    double res = 1;
    for(int i = 0 ;i < times;i++){
        res = res * num;
    }
    return res;
}

