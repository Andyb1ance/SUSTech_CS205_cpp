//
// created by Andyb1ance 2020/3/15
//
// assignment1: compute the flying distance between the two and display
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;
#define PI 3.1415926535
struct city {
    string city_name;
    string longitude;
    string latitude;
};

void checkName(string);

void checkFloat(string, string);

double stringToFloat(string);

double calDistance(string, string, string, string);

double degreeToRad(double);

int main() {
    city *first = new city;
    city *second = new city;
    //first city
    cout << "The first city: ";
    getline(cin, first->city_name);
    checkName(first->city_name);
    cout << "The latitude and longitude of first city: ";
    cin >> first->latitude;
    cin >> first->longitude;
    checkFloat(first->latitude, "la");
    checkFloat(first->longitude, "lo");
    //second city
    cin.get();
    cout << "The second city: ";
    getline(cin, second->city_name);
    checkName(second->city_name);
    cout << "The latitude and longitude of second city: ";
    cin >> second->latitude;
    cin >> second->longitude;
    checkFloat(second->latitude, "la");
    checkFloat(second->longitude, "lo");
    float res = calDistance(first->latitude, second->latitude, first->longitude, second->longitude);
    cout << "The distance between " << first->city_name << " and " << second->city_name << " is " << res << " km" << endl;
    delete first;
    delete second;
    return 0;
}

void checkName(string name) {
    if (name.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_ ,") != string::npos) {
        cout << "find a mistake, the input format of city name is incorrect" << endl;
        exit(0);
    }
}

void checkFloat(string num, string type) {
    if (num.find_first_not_of("-1234567890.") != string::npos) {
        cout << "find a mistake, the input format of longitude or latitude is incorrect" << endl;
        exit(0);
    }
    if (type == "la") {
        if (stringToFloat(num) < -90.0f || stringToFloat(num) > 90.0f) {
            cout << "find a mistake, the input out of latitude range" << endl;
            exit(0);
        }
    } else {
        if (stringToFloat(num) < -180.0f || stringToFloat(num) > 180.0f) {
            cout << "find a mistake, the input out of longitude range" << endl;
            exit(0);
        }
    }
}

double stringToFloat(string num) {
    return atof(num.c_str());
}

double degreeToRad(double degree) {
    return degree * PI / 180.0f;
}

double calDistance(string la1, string la2, string lo1, string lo2) {
    double phi1 = degreeToRad(90 - stringToFloat(la1));
    double phi2 = degreeToRad(90 - stringToFloat(la2));
    double theta1 = degreeToRad(stringToFloat(lo1));
    double theta2 = degreeToRad(stringToFloat(lo2));
    double c = sin(phi1) * sin(phi2) * cos(theta1 - theta2) + cos(phi1) * cos(phi2);
    double d = 6371 * acos(c);
    return d;
}

