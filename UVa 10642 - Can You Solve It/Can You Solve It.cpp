#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 0, T;
    cin >> T;
    while(t++ < T){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int ans = 0;
        ans += (x1 + y1 + x2 + y2 + 1) * (x2 + y2 - x1 - y1) / 2;
        ans += (x2 - x1);
        cout << "Case " << t << ": " << ans << endl;
    }
    return 0;
}
