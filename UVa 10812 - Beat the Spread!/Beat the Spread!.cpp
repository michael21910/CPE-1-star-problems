#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    for(int i = 0; i < cases; i++){
        int x, y;
        cin >> x >> y;
        if((x + y) / 2 < 0 || (x - y) / 2 < 0 || (x + y) % 2 || (x - y) % 2){
            cout << "impossible" << endl;
        }
        else{
            cout << (x + y) / 2 << " " << (x - y) / 2 << endl;
        }
    }
    return 0;
}
