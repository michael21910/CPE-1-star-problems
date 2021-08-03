#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while(cases--){
        int row, col, test_cases;
        cin >> row >> col >> test_cases;
        char arr[row][col];
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                cin >> arr[i][j];
            }
        }
        cout << row << " " << col << " " << test_cases << endl;
        for(int i = 0; i < test_cases; i++){
            int x, y;
            cin >> x >> y;
            int ans = 1;
            for(int j = 1; ; j++){
                bool flag = false;
                for(int r = x - j; r <= x + j; r++){
                    for(int c = y - j; c <= y + j; c++){
                        if(r < 0 || c < 0 || r >= row || c >= col || arr[r][c] != arr[x][y]){
                            flag = true;
                            break;
                        }
                    }
                }
                if(flag){
                    break;
                }
                else{
                    ans += 2;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
