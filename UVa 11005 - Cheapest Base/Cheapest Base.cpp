#include <bits/stdc++.h>

using namespace std;

int price[36] = {0}, total_price[36] = {0};

void run(int num)
{
    int test, cheap = INT_MAX;
    for(int i = 2; i <= 36; i++){
        test = num;
        total_price[i - 2] = 0;
        for(int j = i; test > 0; test /= j){
            total_price[i - 2] += price[test % j];
        }
        if(cheap > total_price[i - 2]){
            cheap = total_price[i - 2];
        }
    }
    cout << "Cheapest base(s) for number " << num << ": ";
    for(int i = 0; i < 35; i++){
        if(cheap == total_price[i]){
            cout << i + 2 << " ";
        }
    }
    cout << endl;
}

int main()
{
    int T, t = 0;
    cin >> T;
    while(t++ < T){
        for(int i = 0; i < 36; i++){
            cin >> price[i];
        }
        int numbers;
        cin >> numbers;
        for(int i = 0; i < numbers; i++){
            int num;
            cin >> num;
            if(i == 0){
                cout << "Case " << t << ":" << endl;
            }
            run(num);
        }
        if(t < T){
            cout << endl;
        }
    }
    return 0;
}
