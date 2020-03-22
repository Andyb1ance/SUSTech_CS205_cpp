//
// Created by AndyB1ance on 2020/3/22.
//
// lab5 exercise1: practice to use loop
//
#include <iostream>
using namespace std;
int main(){
    long long sum=0;
    int num_input=0;
    do{
        cout << "Enter integer number: ";
        cin >> num_input;
        sum += num_input;
        cout << "The cumulative sum of the entries to date is :" << sum << endl;
    }while(num_input);
    return 0;
}


