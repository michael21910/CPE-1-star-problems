#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    if (a.first != b.first) return a.first < b.first;
    else return a.second > b.second;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str;
    int counter = 0;
    while(getline(cin, str)){
        if(counter == 0){
            counter++;
        }
        else{
            cout << endl;
            counter++;
        }
        pair<int, int> a[256];
        for (int i = 0; i < 256; i++) {
            a[i] = {0, i};
        }
        for (int i = 0; i < str.size(); i++) {
            a[(int)str[i]].first++;
        }
        sort(a, a + 256, cmp);
        for (auto i: a){
            if (i.first > 0) cout << i.second << " " << i.first << endl;
        }
    }
    return 0;
}
