//
// Created by AndyB1ance on 2020/3/28.
//
// lab6 exercise2: practice of using branch
//

#include <cstring>
#include "iostream"
#include <cctype>
using namespace std;
bool isVowel(char);

int main(){
    int words_vowel=0;
    int words_consonant=0;
    int others=0;
    cout << "Enter words (q to quit):";
    char word[30];
    cin >> word;
    while(strcmp(word,"q")){
        if(isalpha(word[0])){
            if(isVowel(word[0]))
                words_vowel++;
            else
                words_consonant++;
        }else
            others++;
        cin >> word;
    }
    cout << words_vowel << " words begining with vowels" << endl;
    cout << words_consonant << " words begining with consonants" << endl;
    cout << others << " others";
    return 0;
}

bool isVowel(char alphabet){
    switch(tolower(alphabet)){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}

