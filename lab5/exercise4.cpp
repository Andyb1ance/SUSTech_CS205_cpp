//
// Created by AndyB1ance on 2020/3/22.
//
// lab5 exercise4: practice to use loop
//
#include "iostream"
using namespace std;
int main(){
    for(int i=1;i<=7;i++){
        for(int j=1;j<=i;j++)
            cout << j ;
        for(int k=i+1;k<=7;k++)
            cout << "*";
        cout << endl;
    }

}

