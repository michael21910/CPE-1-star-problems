#include <bits/stdc++.h>

using namespace std;

int main()
{
    int total;
    while(cin >> total){
        int numbers[total];
        int check[total - 1] = {0};
        for(int i = 0; i < total; i++){
            cin >> numbers[i];
        }
        for(int i = 0; i < total - 1; i++){
            check[ abs(numbers[i] - numbers[i + 1]) - 1 ]++;
        }
        bool Jolly = true;
        for(int i = 0; i < total - 1; i++){
            if(check[i] != 1){
                Jolly = false;
                break;
            }
        }
        if(Jolly){
            cout << "Jolly" << endl;
        }
        else{
            cout << "Not jolly" << endl;
        }
    }
    return 0;
}
