#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while(cases--){
        int number;
        cin >> number;
        int arr[number];
        for(int i = 0; i < number; i++){
            cin >> arr[i];
        }
        int counter = 0;
        for(int i = 0; i < number; i++){
            for(int j = i + 1; j < number; j++){
                if(arr[i] > arr[j]){
                    swap(arr[i], arr[j]);
                    counter++;
                }
            }
        }
        cout << "Optimal train swapping takes " << counter << " swaps." << endl;
    }
    return 0;
}
