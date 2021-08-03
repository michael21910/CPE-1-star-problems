#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while(cases--){
        int days;
        cin >> days;
        int arr[days + 1] = {0};
        int count_h;
        cin >> count_h;
        for(int i = 0; i < count_h; i++){
            int temp, temp_h;
            cin >> temp_h;
            temp = temp_h;
            while(temp <= days){
                arr[temp]++;
                temp += temp_h;
            }
        }
        int ans = 0;
        for(int i = 1; i <= days; i++){
            if(arr[i] > 0 && i % 7 != 0 && i % 7 != 6){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
