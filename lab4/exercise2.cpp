//
// Created by AndyB1ance on 2020/3/14.
//
// lab4 exercise2: use new to create a structure array to store information
//

#include "iostream"
using namespace std;
struct CandyBar{
    char name [30];
    float weight;
    int calories;
};

int main(){
    CandyBar* candyBar = new CandyBar[3];
    for (int i=0; i<3; i++){
        printf("Enter the brand name of the candyBar %d: ",i+1);
        cin.getline(candyBar[i].name,30);
        printf("Enter the weight of the candyBar %d: ",i+1);
        cin >> candyBar[i].weight;
        printf("Enter the calories of the candyBar %d: ",i+1);
        cin >> candyBar[i].calories;
        cin.get();
    }
    cout << endl;
    for(int i=0; i<3; i++){
        printf("The brand name of the candyBar %d: %s\n",i+1,candyBar[i].name);
        printf("The diameter of the candyBar %d: %g\n",i+1,candyBar[i].weight);
        printf("The calories of the candyBar %d: %d\n",i+1,candyBar[i].calories);
    }
    delete []candyBar;
    return 0;
}
