#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str = "`1234567890-=qwertyuiop[]\\asdfghjkl;\'zxcvbnm,./";
    string inputString;
    getline(cin, inputString);
    for(int i = 0; i < inputString.length(); i++){
        inputString[i] = tolower(inputString[i]);
    }
    for(int i = 0; i < inputString.length(); i++){
        if(inputString[i] == ' '){
            cout << " ";
        }
        else{
            for(int j = 0; j < str.length(); j++){
                if(str[j] == inputString[i]){
                    cout << str[j - 2];
                    break;
                }
            }
        }
    }
    return 0;
}
