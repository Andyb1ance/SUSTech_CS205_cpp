//
// Created by AndyB1ance on 2020/3/22.
//
// lab5 exercise2: practice to process string
//

#include "iostream"
#include "cstring"
int main(){
    using namespace std;
    char string_input[1000];
    int count=0;
    cout << "Enter words (to stop, type the word done):\n";
    cin >> string_input;
    while(strcmp(string_input,"done")){
        count++;
        cin >> string_input;
    }
    cout << "You entered a total of " << count << " words." << endl;
    return 0;
}

