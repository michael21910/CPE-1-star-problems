#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while(cases--){
        int num, count_binary = 0, count_hex = 0, num_temp;
        cin >> num;
        num_temp = num;
        while(num > 0){
            if(num % 2){
                count_binary++;
            }
            num /= 2;
        }
        num = num_temp;
        while(num > 0){
            int temp = num % 10;
            while(temp > 0){
                if(temp % 2){
                    count_hex++;
                }
                temp /= 2;
            }
            num /= 10;
        }
        cout << count_binary << " " << count_hex << endl;
    }
    return 0;
}
