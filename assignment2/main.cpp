//
// created by Andyb1ance 2020/3/15
//
// assignment2: compute the flying distance between the two and display
//

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <sstream>
#include <vector>


using namespace std;
#define PI 3.1415926535
#define MAX_NAME_LENGTH 35
#define MAX_ARRAY_LENGTH 1000
struct city {
    char city_name[MAX_NAME_LENGTH];
    char country_name[MAX_NAME_LENGTH];
    string longitude;
    string latitude;
};


double stringToFloat(string);

double stringToInt(string);

double calDistance(string, string, string, string);

double degreeToRad(double);

string trim(string);

int checkNumber(string,int);

int main() {

    //TODO：把这一整块改写成函数
    ifstream csv;
    csv.open("world_cities.csv");
    if(!csv.good()){
        cout << "missing file, please check again";
        return 0;
    }
    city cities_info[MAX_ARRAY_LENGTH];
    string line;
    int lines=-1;
    while(getline(csv,line)){
        lines++;
        if(lines + 1 > MAX_ARRAY_LENGTH){
            cout << "out of index, data is truncated or not loaded\n";
            return 0;
        }
        istringstream sin(line);
        vector<string> city;
        string temp;
        while(getline(sin,temp,',')) city.push_back(temp);
        if(city[0].size() > MAX_NAME_LENGTH || city[2].size() > MAX_NAME_LENGTH){
            cout << "out of index, data is truncated or not loaded\n";
            return 0;
        }
        city[0].copy(cities_info[lines].city_name,city[0].length(),0);
        city[2].copy(cities_info[lines].country_name,city[2].length(),0);
        cities_info[lines].latitude=city[3];
        cities_info[lines].longitude=city[4];
    }

    while(true){

        string first[3];
        string second[3];

        //TODO：感觉思路不太对 得把这一整块改写成函数
        while(true){
            cout << "Enter the first city name: ";
            string temp;
            getline(cin,temp);
            temp=trim(temp);
            if(temp=="bye"){
                return 0;
            }
            if(temp.length() < 3){
                cout << "name shorter than three letters\n";
                continue;
            }else{
                vector<city> matched_list;
                for(int i=0; i<lines; i++){
                    if(temp==cities_info[i].city_name){

                    }
                }
                for(int i=0; i<lines; i++){
                    string temp2=cities_info[i].city_name;
                    if(temp2.find(temp) != string::npos){
                        matched_list.push_back(cities_info[i]);
                    }
                }
                if(matched_list.size()>=1){
                    cout << "matched cities: \n";
                    for(int i=0;i<matched_list.size();i++){
                        cout << i << ". " << matched_list[i].city_name <<", " << matched_list[i].country_name << endl;
                    }
                    cout << "choose a city with a number between " << 0 << " and " << matched_list.size()-1 << ", or input other thing to skip" << endl;
                    string number;
                    getline(cin,number);
                    if(checkNumber(number,matched_list.size()-1)!=-1){
                        first[0]=matched_list[stringToInt(number)].latitude;
                        first[1]=matched_list[stringToInt(number)].longitude;
                        first[2]=matched_list[stringToInt(number)].city_name;
                        break;
                    }
                }else if(matched_list.empty()){
                    cout << "no matched city\n";
                }
            }
        }

        //TODO 使用函数
        while(true){
            cout << "Enter the second city name: ";
            string temp;
            getline(cin,temp);
            temp=trim(temp);
            if(temp=="bye"){
                return 0;
            }
            if(temp.length() < 3){
                cout << "name shorter than three letters\n";
                continue;
            }else{
                vector<city> matched_list;
                for(int i=0; i<lines; i++){
                    string temp2=cities_info[i].city_name;
                    if(temp2.find(temp) != string::npos){
                        matched_list.push_back(cities_info[i]);
                    }
                }
                if(matched_list.size()>=1){
                    cout << "matched cities: \n";
                    for(int i=0;i<matched_list.size();i++){
                        cout << i << ". " << matched_list[i].city_name <<", " << matched_list[i].country_name << endl;
                    }
                    cout << "choose a city with a number between " << 0 << " and " << matched_list.size()-1 << " or input other thing to skip" << endl;
                    string number;
                    getline(cin,number);
                    if(checkNumber(number,matched_list.size()-1)!=-1){
                        second[0]=matched_list[stringToInt(number)].latitude;
                        second[1]=matched_list[stringToInt(number)].longitude;
                        second[2]=matched_list[stringToInt(number)].city_name;
                        break;
                    }
                }else if(matched_list.size() <1){
                    cout << "no matched city\n";
                }
            }
        }
        double res=calDistance(first[0],second[0],first[1],second[1]);
        cout << "The distance between " << first[2] << " and " << second[2] << " is " << res << " km" << endl;
    }
    return 0;
}

double stringToFloat(string num) {
    return atof(num.c_str());
}
double stringToInt(string num) {
    return atoi(num.c_str());
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
string trim(string str)
{
    if (str.empty())
        return str;
    str.erase(0,str.find_first_not_of(" \n\r\t"));
    str.erase(str.find_last_not_of(" \n\r\t") + 1);
    return str;
}

int checkNumber(string num,int max) {
    if (num.find_first_not_of("-1234567890") != string::npos) {
        cout << "skip" << endl;
        return -1;
    } else if(stringToInt(num) < 0 || stringToInt(num) > max){
        return -1;
    } else {
        return 0;
    }
}