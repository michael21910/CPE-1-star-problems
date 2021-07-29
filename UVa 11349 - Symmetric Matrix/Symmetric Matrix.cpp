#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    for(int a = 0; a < cases; a++){
        char foo, foo2;
        long long s;
        cin >> foo >> foo2 >> s;
        long long arr[s][s];
        for(int i = 0; i < s; i++){
            for(int j = 0; j < s; j++){
                cin >> arr[i][j];
            }
        }
        bool isSym = true;
        for(int i = 0; i < s; i++){
            for(int j = 0; j < s; j++){
                if(arr[i][j] < 0){
                    isSym = false;
                    break;
                }
                if(arr[i][j] != arr[s - i - 1][s - j - 1]){
                    isSym = false;
                    break;
                }
            }
            if(!isSym){
                break;
            }
        }
        if(isSym){
            cout << "Test #" << a + 1 << ": Symmetric." << endl;
        }
        else{
            cout << "Test #" << a + 1 << ": Non-symmetric." << endl;
        }
    }
    return 0;
}
