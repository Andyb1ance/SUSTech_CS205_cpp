//
// Created by AndyB1ance on 2020/3/22.
//
// lab5 exercise: practice to use while, for and do..while
//
#include "iostream"
using namespace std;
void Gen_Fib_Seq_while(int num);
void Gen_Fib_Seq_for(int num);
void Gen_Fib_Seq_dowhile(int num);

int main(){
    int num;
    cout << "Enter a positive number: ";
    cin >> num;
    //Gen_Fib_Seq_while(num);
    //Gen_Fib_Seq_for(num);
    Gen_Fib_Seq_dowhile(num);
}
void Gen_Fib_Seq_while(int num){
    long long f1 = 0;
    long long f2 = 1;
    cout << "Fibonacci Series: 0 1  ";
    while(f1+f2 <= num){
        int temp=f1;
        f1=f2;
        f2+=temp;
        cout << f2 << " ";
    }
}

void Gen_Fib_Seq_for(int num){
    long long f1 = 0;
    long long f2 = 1;
    cout << "Fibonacci Series: 0 1  ";
    for(;f1+f2 <= num;){
        int temp=f1;
        f1=f2;
        f2+=temp;
        cout << f2 << " ";
    }
}
void Gen_Fib_Seq_dowhile(int num){
    long long f1 = 0;
    long long f2 = 1;
    cout << "Fibonacci Series: 0 1  ";
    do {
        int temp=f1;
        f1=f2;
        f2+=temp;
        cout << f2 << " ";
    }while(f1+f2<=num);
}