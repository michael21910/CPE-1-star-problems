#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long fib[39] = {0};
    fib[0] = 1, fib[1] = 2;
    for(int i = 2; i < 39; i++){
        fib[i] = fib[i - 2] + fib[i - 1];
    }
    int cases;
    cin >> cases;
    for(int i = 0; i < cases; i++){
        int num;
        cin >> num;
        cout << num << " = ";
        bool flag = false;
        for(int j = 38; j >= 0; j--){
            if(num / fib[j] == 1){
                cout << "1";
                num %= fib[j], flag = true;
            }
            else if(flag){
                cout << "0";
            }
        }
        cout << " (fib)" << endl;
    }
    return 0;
}
