#include <bits/stdc++.h>

using namespace std;

void recursive(string str)
{
    int total = 0;
    for(int i = 0; i < str.length(); i++){
        total += int(str[i] - '0');
    }
    if(to_string(total).length() == 1){
        cout << to_string(total) << endl;
    }
    else{
        recursive(to_string(total));
    }
}

int main()
{
    string str;
    while(cin >> str && str != "0"){
        recursive(str);
    }
    return 0;
}

