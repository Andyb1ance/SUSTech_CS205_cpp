//
// Created by AndyB1ance on 2020/3/1.
//
// lab2 exercise 2: enter seconds, display equivalent time(days,hours,minutes,seconds),use symbolic constants
//
#include "iostream"
using namespace std;
#define SECONDS_PER_MINUTE 60
#define MINUTES_PER_HOUR 60
#define HOURS_PER_DAY 24

int main(){
    cout << "Enter the number of seconds:";
    long long num;
    cin >> num;
    if(num<=0){
        cout << "The input should not be less than one";
    }else{
        cout << num << " seconds = ";

        long long seconds = num % SECONDS_PER_MINUTE;
        num /= SECONDS_PER_MINUTE;
        long long minutes = num % MINUTES_PER_HOUR;
        num /= MINUTES_PER_HOUR;
        long long hours = num % HOURS_PER_DAY;
        num /= HOURS_PER_DAY;
        long long days = num;

        cout << days << " days, ";
        cout << hours << " hours, ";
        cout << minutes << " minutes, ";
        cout << seconds << " seconds\n";
    }
    return 0;
}


