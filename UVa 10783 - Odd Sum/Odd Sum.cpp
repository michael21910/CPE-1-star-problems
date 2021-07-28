#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    for(int i = 0; i < cases; i++){
        int a, b, ans = 0;
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            if(j % 2){
                ans += j;
            }
        }
        cout << "Case " << i + 1 << ": " << ans << endl;
    }
    return 0;
}
