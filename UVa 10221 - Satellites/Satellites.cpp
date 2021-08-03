#include <bits/stdc++.h>

using namespace std;

int main()
{
    double r = 6440.0, s, a, chord, arc;
    string unit;
    while(cin >> s >> a >> unit){
        if(unit == "min"){
            a /= 60.0;
        }
        if(a > 180.0){
            a = 360.0 - a;
        }
        cout << fixed << setprecision(6) << 2.0 * acos(0.0) * 2.0 * (r + s) * a / 360.0 << " " << (r + s) * cos((90.0 - a / 2.0) / 180.0 * acos(0.0) * 2.0) * 2.0 << endl;
    }
    return 0;
}
