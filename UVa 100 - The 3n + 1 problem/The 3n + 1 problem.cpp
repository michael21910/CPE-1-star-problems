#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2;
    while(cin >> n1 >> n2){
        cout << n1 << " " << n2 << " ";
        int ans = 0;
        for(int i = min(n1, n2); i <= max(n1, n2); i++){
            int temp = i, counter = 1;
            while(temp > 1){
                if(temp % 2 == 0){
                    temp /= 2;
                }
                else{
                    temp = temp * 3 + 1;
                }
                counter++;
            }
            if(ans < counter){
                ans = counter;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
