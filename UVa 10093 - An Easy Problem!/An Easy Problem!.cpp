#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(getline(cin, str)){
        int sum = 0, base = 1, temp;
        for(int i = 0; i < str.length(); i++){
            if(isdigit(str[i])){
                temp = str[i] - '0';
            }
            else if(isupper(str[i])){
                temp = str[i] - 'A' + 10;
            }
            else if(islower(str[i])){
                temp = str[i] - 'a' + 36;
            }
            else{
                continue;
            }
            if(temp > base){
                base = temp;
            }
            sum += temp;
        }
        for(int i = base; i < 62; i++){
            if(sum % i == 0){
                cout << i + 1 << endl;
                break;
            }
            if(i == 61){
                cout << "such number is impossible!" << endl;
            }
        }
    }
    return 0;
}
