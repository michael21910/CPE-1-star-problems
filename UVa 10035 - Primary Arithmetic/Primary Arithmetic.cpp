#include <bits/stdc++.h>

using namespace std;
int main()
{
    string str1, str2;
    while(cin >> str1 >> str2 && (str1 != "0" || str2 != "0")){
        int counter = 0;
        int arr1[11] = {0}, arr2[11] = {0};
        if(str2.length() > str1.length()){
            swap(str1, str2);
        }
        for(int i = 0; i < str1.length(); i++){
            arr1[str1.length() - i - 1] = str1[i] - '0';
        }
        for(int i = 0; i < str2.length(); i++){
            arr2[str2.length() - i - 1] = str2[i] - '0';
        }
        for(int i = 0; i < 10; i++){
            arr1[i] += arr2[i];
            if(arr1[i] >= 10){
                arr1[i + 1]++;
                arr1[i] -= 10;
                counter++;
            }
        }
        if(counter == 0){
            cout << "No carry operation.";
        }
        else if(counter == 1){
            cout << "1 carry operation.";
        }
        else{
            cout << counter << " carry operations.";
        }
        cout << endl;
    }
    return 0;
}
