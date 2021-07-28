#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    while(cin >> x){
        string str;
        getline(cin, str);
        getline(cin, str);
        int curr_index = 0;
        string temp = "";
        vector<int> poly;
        for(int i = 0; i < str.length(); i++){
            if(str[i] == ' '){
                poly.push_back(stoi(temp));
                temp = "";
                curr_index = i + 1;
            }
            else{
                temp += str[i];
                if(i == str.length() - 1){
                    poly.push_back(stoi(temp));
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < poly.size() - 1; i++){
            ans += (poly.size() - i - 1) * poly[i] * pow(x, poly.size() - i - 2);
        }
        cout << ans << endl;
    }
    return 0;
}
