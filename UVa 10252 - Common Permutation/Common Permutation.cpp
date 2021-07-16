#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1, str2;
    while(getline(cin, str1) && getline(cin, str2)){
        string output = "";
        for(int i = 0; i < str1.length(); i++){
            for(int j = 0; j < str2.length(); j++){
                if(str1[i] == str2[j]){
                    output += str1[i];
                    str2[j] = ' ';
                    break;
                }
            }
        }
        sort(output.begin(), output.end());
        cout << output << endl;
    }
    return 0;
}
