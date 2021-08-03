#include <bits/stdc++.h>

using namespace std;

bool notPrime[1000001];

void makeTable()
{
    notPrime[1] = true;
    for(int i = 2; i < 1000001; i++){
        if(!notPrime[i]){
            for(int j = i + i; j < 1000001; j += i){
                notPrime[j] = true;
            }
        }
    }
}

int main()
{
    makeTable();
    string str, temp;
    while(cin >> str){
        temp = str;
        cout << str << " ";
        if(!notPrime[stoi(str)]){
            reverse(str.begin(), str.end());
            if(temp == str){
                cout << "is prime." << endl;
                continue;
            }
            if(!notPrime[stoi(str)]){
                cout << "is emirp." << endl;
                continue;
            }
            else{
                cout << "is prime." << endl;
                continue;
            }
        }
        else{
            cout << "is not prime." << endl;
            continue;
        }
    }
    return 0;
}
