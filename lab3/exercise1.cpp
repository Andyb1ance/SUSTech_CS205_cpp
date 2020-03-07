//
// Created by AndyB1ance on 2020/3/7.
//
// exercise1: practice of using structure
//

#include "iostream"
using namespace std;

struct CandyBar{
    char brand [20];
    float weight;
    int calories;
};

int main(){
    CandyBar snack{
        "Mocha Munch",
        2.3,
        350
    };
    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calorie: " << snack.calories << endl;
}

