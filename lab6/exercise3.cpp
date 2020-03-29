//
// Created by AndyB1ance on 2020/3/28.
//
// lab6 exercise3: practice of using branch
//

#include "iostream"
using namespace std;

int main(){
    int quiz;
    int mid;
    int final;
    cout << "Enter quiz grade: ";
    cin >> quiz;
    cout << "Enter mid-term grade: ";
    cin >> mid;
    cout << "Enter final scores: ";
    cin >> final;
    int average = (quiz + mid + final)/3;
    if(average >= 90){
        cout << "grade=A";
    }else if(average >=70){
        cout << "grade=B";
    }else if(average >=50){
        cout << "grade=C";
    }else{
        cout << "grade=F";
    }
    return 0;
}

