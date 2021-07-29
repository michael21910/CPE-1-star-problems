#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num1, num2;
    while(cin >> num1 >> num2 && num1 && num2){
        int counter = 0;
        for(int i = num1; i <= num2; i++){
            double temp = sqrt(i);
            int temp2 = temp;
            if(temp == temp2){
                counter++;
            }
        }
        cout << counter << endl;
    }
    return 0;
}
