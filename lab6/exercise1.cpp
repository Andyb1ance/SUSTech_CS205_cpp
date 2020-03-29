//
// Created by AndyB1ance on 2020/3/28.
//
// lab6 exercise1: practice of using switch
//

#include <iostream>
#include <cctype>
using namespace std;

int main(){
    cout << "Enter any alphabet: ";
    char alphabet;
    cin >> alphabet;
    switch(tolower(alphabet)){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Vowel";
            break;
        default:
            cout << "Consonant";
    }
    return 0;
}

