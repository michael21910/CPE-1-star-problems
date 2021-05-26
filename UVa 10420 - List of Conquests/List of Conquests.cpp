#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> ans;
    for(int i = 0; i < n; i++){
        string country, foo;
        cin >> country;
        getline(cin, foo);
        ans[country]++;
    }
    for(auto x : ans){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}
