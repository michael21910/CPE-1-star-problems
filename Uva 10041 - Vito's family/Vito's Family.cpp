#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, arr[30000];
    cin >> n;
    for(int i = 0; i < n; i++){
        int r;
        cin >> r;
        for(int j = 0; j < r; j++){
            cin >> arr[j];
        }
        sort(arr, arr + r);
        int middle = (r / 2), total1 = 0, total2 = 0;
        if(r % 2 == 1){
            for(int j = 0; j < r; j++){
                total1 += abs(arr[j] - arr[middle]);
            }
            cout << total1 << endl;
        }
        else{
            for(int j = 0; j < r; j++){
                total1 += abs(arr[j] - arr[middle]);
            }
            middle--;
            for(int j = 0; j < r; j++){
                total2 += abs(arr[j] - arr[middle]);
            }
            cout << min(total1, total2) << endl;
        }
    }
    return 0;
}
