#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long init, day;
    while(cin >> init >> day){
        while(day > 0){
            day -= init;
            init++;
        }
        cout << init - 1 << endl;
    }
    return 0;
}
