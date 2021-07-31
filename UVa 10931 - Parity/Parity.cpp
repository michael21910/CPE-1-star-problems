#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long num;
    while(cin >> num && num){
        string str = "";
        int sum = 0;
        while(num > 0){
            if(num % 2){
                str = "1" + str;
                sum++;
            }
            else{
                str = "0" + str;
            }
            num /= 2;
        }
        cout << "The parity of " << str << " is " << sum << " (mod 2)." << endl;
    }
    return 0;
}
