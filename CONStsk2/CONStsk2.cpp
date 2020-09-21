

#include <iostream>

using namespace std;

int main() {
int year, month, day;
cin >> year >> month >> day;
if ((day - 1 == 0) && (month - 1 == 0)) {
    year -= 1;
    month = 12;
    day = 31;

   }











    if (day - 1 == 0) {
    month -= 1;
        if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 9)) {
        day = 31;
        cout << year <<' '<<'0'<< month <<' '<< day << '\n'; }
        else {
        (month == 11);
        cout << year << ' ' << month << ' ' << day << '\n';
    }
        if ((month == 2) || (month == 4) || (month == 6) || (month == 8)) {
        day = 31;
        cout << year << ' ' << '0' << month << ' ' << day << '\n';
    }
        else {
            ((month == 11) || (month == 12));
            day = 30;
            cout << year << ' ' << month << ' ' << day << '\n';


        }



    }
    else {
        day -= 1;
        if (((month == 1) || (month == 2) || (month == 3) || (month == 4) || (month == 5) || (month == 6) || (month == 7) || (month == 8) || (month == 9)) && 
            ((day == 1) || (day == 2) || (day == 3) || (day == 4) || (day == 5) || (day == 6) || (day == 7) || (day == 8) || (day == 9))) {
            cout << year <<' '<<'0' << month << ' ' <<'0'<< day << '\n';
        }
        else {

            cout << year << ' ' << month << ' ' << day << '\n';
        }
    }
    
    return 0;
}