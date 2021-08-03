#include <bits/stdc++.h>

using namespace std;

bool notBoring(long long num1, long long num2)
{
    for(int i = 1; ; i++){
        if(num1 == pow(num2, i)){
            return true;
        }
        if(num1 < pow(num2, i)){
            return false;
        }
    }
}

int main()
{
    long long num1, num2;
    while(cin >> num1 >> num2){
        if(num2 == 0 || num2 == 1 || !notBoring(num1, num2)){
            cout << "Boring!" << endl;
            continue;
        }
        else if(notBoring(num1, num2)){
            cout << num1 << " ";
            while(num1 != num2){
                num1 /= num2;
                cout << num1<< " ";
            }
            cout << "1" << endl;
            continue;
        }
    }
    return 0;
}
