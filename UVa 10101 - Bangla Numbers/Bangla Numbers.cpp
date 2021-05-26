#include <bits/stdc++.h>

using namespace std;

void bangla(long long int number)
{
    if(number >= 10000000){
        bangla(number / 10000000);
        cout << " kuti ";
        number %= 10000000;
    }
    if(number >= 100000){
        bangla(number / 100000);
        cout << " lakh ";
        number %= 100000;
    }
    if(number >= 1000){
        bangla(number / 1000);
        cout << " hajar ";
        number %= 1000;
    }
    if(number >= 100){
        bangla(number / 100);
        cout << " shata ";
        number %= 100;
    }
    if(0 <= number && number < 100){
        cout << number;
    }
}

int main()
{
    long long int number;
    int counter = 0;
    while(cin >> number){
        cout << ++counter << ". ";
        bangla(number);
        cout << endl;
    }
    return 0;
}
