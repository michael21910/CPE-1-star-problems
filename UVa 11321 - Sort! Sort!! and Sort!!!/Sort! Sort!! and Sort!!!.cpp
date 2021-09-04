#include <bits/stdc++.h>
using namespace std;

int n, m;
int isOdd(int num)
{
    return abs(num % 2);
}

bool cmp(int a, int b)
{
    if(a % m != b % m){
        return a%m < b%m;
    }
    if(isOdd(a) != isOdd(b)){
        return isOdd(a);
    }
    if(isOdd(a)){
        return a > b;
    }
    return a < b;
}

int main ()
{
    int arr[10001];
    while(cin >> n >> m){
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n, cmp);
        cout << n << " " << m << endl;
        for(int i = 0; i < n; i++){
            cout << arr[i] << endl;
        }
        if(n == 0 && m == 0){
            break;
        }
    }
    return 0;
}
