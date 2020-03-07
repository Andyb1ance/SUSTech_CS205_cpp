//
// Created by AndyB1ance on 2020/3/7.
//
// exercise2: practice of using structure and io
//

#include "iostream"
using namespace std;

struct CandyBar{
    char brand [50];
    float weight;
    int calories;
};

int main(){
    CandyBar snack;
    cout << "Enter brand name of a Candy bar: ";
    cin.getline(snack.brand,50);
    cout << "Enter weight of the candy bar: ";
    cin >> snack.weight;
    cout << "Enter calories (an integer value) in the candy bar: ";
    cin >> snack.calories;

    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calorie: " << snack.calories << endl;
}

