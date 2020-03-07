//
// Created by AndyB1ance on 2020/3/7.
//
// exercise3: practice of using structure and object array
//

#include "iostream"
using namespace std;

struct CandyBar{
    char brand [20];
    float weight;
    int calories;
};

int main(){
    CandyBar snack[3]={
            {"Mocha Munch", 2.3, 350},
            {"Mocha Munch", 2.3, 350},
            {"Mocha Munch", 2.3, 350}
    };
    for(int i = 0; i < 3; i++){
        cout << "Brand: " << snack[i].brand << endl;
        cout << "Weight: " << snack[i].weight << endl;
        cout << "Calorie: " << snack[i].calories << endl;
    }
}

