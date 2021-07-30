#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numbers, cases_count = 1;
    while(cin >> numbers){
        int arr[101] = {0};
        bool isB2 = true;
        for(int i = 1; i <= numbers; i++){
            cin >> arr[i];
            if(arr[i] <= arr[i - 1] || arr[i] < 1){
                isB2 = false;
            }
        }
        bool counter[20001] = {false};
        if(isB2){
            for(int i = 1; i <= numbers; i++){
                for(int j = i; j <= numbers; j++){
                    if(counter[ arr[i] + arr[j] ]){
                        isB2 = false;
                        break;
                    }
                    if(!counter[ arr[i] + arr[j] ]){
                        counter[ arr[i] + arr[j] ] = true;
                    }
                }
                if(!isB2){
                    break;
                }
            }
        }
        if(isB2){
            cout << "Case #" << cases_count << ": It is a B2-Sequence." << endl << endl;
        }
        else{
            cout << "Case #" << cases_count << ": It is not a B2-Sequence." << endl << endl;
        }
        cases_count++;
    }
    return 0;
}
