//
// Created by AndyB1ance on 2020/3/14.
//
// lab4 exercise3: use pointer to store information than output in reverse order
//

#include "iostream"
using namespace std;

int main(){
//    int* array = new int[5];
//    cout << "Enter five integer: ";
//    for(int i=0; i<5; i++){
//        cin >> array[i];
//    }
//    for(int i=4; i>=0; i--){
//        cout << array[i] << " ";
//    }
//    delete[] array;

    int* ptr = new int[5];
    for(int i=0;i<5;i++){
        cin >> *(ptr+i);
    }
    for(int i=4;i>=0;i--){
        cout << *(ptr+i) << " ";
    }
    delete [] ptr;
    return 0;
}

