#include <bits/stdc++.h>

using namespace std;

long long b_to_d(string str)
{
    long long x = 0;
    for(int i = 0; i < str.length(); i++){
        x *= 2;
        x += str[i] - '0';
    }
    return x;
}

long long GCD(long long num1, long long num2)
{
    while( (num1 %= num2) && (num2 %= num1) );
    return num1 + num2;
}

int main()
{
    int cases, c = 0;
    cin >> cases;
    while(c++ < cases){
        string str1, str2;
        cin >> str1 >> str2;
        long long num1 = b_to_d(str1), num2 = b_to_d(str2);
        if(GCD(num1, num2) == 1){
            cout << "Pair #" << c << ": Love is not all you need!" << endl;
        }
        else{
            cout << "Pair #" << c << ": All you need is love!" << endl;
        }
    }
    return 0;
}
