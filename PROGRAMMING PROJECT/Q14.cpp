#include <iostream>
using namespace std;
int main(){
    int hour, minute, second,totalSeconds;

    cout<<"Enter the hour of the day: ";
    cin>>hour;

    while (hour < 0 || hour > 23) {
        cout << "Invalid hour. Please enter a value between 0 and 23: ";
        cin >> hour;
    }

    cout << "Enter the minutes of the hour: ";
    cin >> minute;

    while (minute < 0 || minute > 59) {
        cout << "Invalid minute. Please enter a value between 0 and 59: ";
        cin >> minute;
    }

    cout << "Enter the seconds passed in the current minute: ";
    cin >> second;

    while (second < 0 || second > 59) {
        cout << "Invalid second. Please enter a value between 0 and 59: ";
        cin >> second;
    }

    totalSeconds = hour * 3600 + minute * 60 + second;
    cout << "The time in seconds since midnight is: " << totalSeconds <<endl;

    return 0;
}
