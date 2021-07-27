#include <bits/stdc++.h>

using namespace std;

int calculate_day(int month, int day)
{
    if(month == 1) return 0 + day;
    if(month == 2) return 31 + day;
    if(month == 3) return 59 + day;
    if(month == 4) return 90 + day;
    if(month == 5) return 120 + day;
    if(month == 6) return 151 + day;
    if(month == 7) return 181 + day;
    if(month == 8) return 212 + day;
    if(month == 9) return 243 + day;
    if(month == 10) return 273 + day;
    if(month == 11) return 304 + day;
    else return 334 + day;
}

void run(int month, int day)
{
    int total = calculate_day(month, day);
    switch(total % 7){
        case 0:
            cout << "Friday" << endl;
            break;
        case 1:
            cout << "Saturday" << endl;
            break;
        case 2:
            cout << "Sunday" << endl;
            break;
        case 3:
            cout << "Monday" << endl;
            break;
        case 4:
            cout << "Tuesday" << endl;
            break;
        case 5:
            cout << "Wednesday" << endl;
            break;
        case 6:
            cout << "Thursday" << endl;
            break;
    }
}

int main()
{
    int cases, month, day;
    cin >> cases;
    for(int i = 0; i < cases; i++){
        cin >> month >> day;
        run(month, day);
    }
    return 0;
}
