#include <bits/stdc++.h>

using namespace std;

int main()
{
    int counter = 0;
    string str;
    while(getline(cin, str)){
        for(int i = 0; i < str.length(); i++){
            if(str[i] == '"'){
                (counter % 2) ? cout << "''" : cout << "``";
                counter++;
            }
            else{
                cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}
