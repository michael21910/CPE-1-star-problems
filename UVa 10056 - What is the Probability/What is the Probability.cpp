#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while(cases--){
        int n, x;
        double p, q;
        cin >> n >> p >> x;
        q = 1 - p;
        if(q == 1){
            cout << "0.0000" << endl;
        }
        else{
            cout << fixed << setprecision(4) << pow(q, x - 1) * p / (1 - pow(q, n)) << endl;
        }
    }
    return 0;
}
