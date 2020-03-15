//
// Created by AndyB1ance on 2020/3/14.
//
// lab4 exercise1: use new to creat a structure to get information
//

#include "iostream"
#include "string"
using namespace std;
struct Pizza{
    string name;
    float diameter;
    float weight;
};

int main(){
    Pizza* pizza = new Pizza;
    cout << "Enter the name of the pizza company: ";
    getline(cin,(*pizza).name);
    cout << "Enter the diameter of the pizza: ";
    cin >> pizza->diameter;
    cout << "Enter the weight of the pizza: ";
    cin >> pizza->weight;

    cout << "Name of pizza company: " << pizza->name << endl;
    cout << "Diameter: " << pizza->diameter << endl;
    cout << "Weight: " << pizza->weight << endl;

    delete pizza;
    return 0;
}


