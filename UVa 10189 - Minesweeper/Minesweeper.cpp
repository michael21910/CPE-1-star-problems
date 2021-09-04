#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col, counter = 1;
    bool flag = false;
    while(cin >> row >> col && row && col){
        char arr[row][col];
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                cin >> arr[i][j];
                if(arr[i][j] == '.'){
                    arr[i][j] = '0';
                }
            }
        }
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(arr[i][j] == '*'){
                    continue;
                }
                //left upper
                if(i - 1 >= 0 && j - 1 >= 0 && arr[i - 1][j - 1] == '*'){
                    arr[i][j]++;
                }
                //upper
                if(i - 1 >= 0 && arr[i - 1][j] == '*'){
                    arr[i][j]++;
                }
                //right upper
                if(i - 1 >= 0 && j + 1 < col && arr[i - 1][j + 1] == '*'){
                    arr[i][j]++;
                }
                //left
                if(j - 1 >= 0 && arr[i][j - 1] == '*'){
                    arr[i][j]++;
                }
                //right
                if(j + 1 < col && arr[i][j + 1] == '*'){
                    arr[i][j]++;
                }
                //left lower
                if(i + 1 < row && j - 1 >= 0 && arr[i + 1][j - 1] == '*'){
                    arr[i][j]++;
                }
                //lower
                if(i + 1 < row && arr[i + 1][j] == '*'){
                    arr[i][j]++;
                }
                //right lower
                if(i + 1 < row && j + 1 < col && arr[i + 1][j + 1] == '*'){
                    arr[i][j]++;
                }
            }
        }
        if(!flag){
            flag = !flag;
        }
        else{
            cout << endl;
        }
        cout << "Field #" << counter++ << ":" << endl;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(arr[i][j] != '*'){
                    cout << arr[i][j] - '0';
                }
                else{
                    cout << arr[i][j];
                }
            }
            cout << endl;
        }
    }
    return 0;
}
