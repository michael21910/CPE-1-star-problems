#include <bits/stdc++.h>

using namespace std;

int main()
{
    int total;
    cin >> total;
    string str;
    int counter[2][26];
    for(int i = 0; i < 26; i++){
        counter[0][i] = i;
        counter[1][i] = 0;
    }
    for(int i = 0; i <= total; i++){
        getline(cin, str);
        for(int j = 0; j < str.length(); j++){
            if(toupper(str[j]) <= 'Z' && 'A' <= toupper(str[j])){
                counter[1][toupper(str[j]) - 'A']++;
            }
        }
    }

    for(int i = 0; i < 26; i++){
        for(int j = 0; j < 26; j++){
            if(counter[1][i] > counter[1][j]){
                swap(counter[0][i], counter[0][j]);
                swap(counter[1][i], counter[1][j]);
            }
            if(counter[1][i] == counter[1][j]){
                if(counter[0][i] < counter[0][j]){
                    swap(counter[0][i], counter[0][j]);
                    swap(counter[1][i], counter[1][j]);
                }
            }
        }
    }

    for(int i = 0; i < 26; i++){
        if(counter[1][i] != 0){
            cout << char(counter[0][i] + 'A') << " " << counter[1][i] << endl;
        }
    }

    return 0;
}
