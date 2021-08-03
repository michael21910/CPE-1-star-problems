#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b)
{
    while((a %= b) && (b %= a));
    return a + b;
}

int main()
{
    int n;
    while(cin >> n && n){
        int sum = 0;
        for(int i = 1; i < n; i++){
            for(int j = i + 1; j <= n; j++){
                sum += GCD(i, j);
            }
        }
        cout << sum << endl;
    }
    return 0;
}
