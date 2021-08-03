#include <bits/stdc++.h>

using namespace std;

void run(string str, int counter)
{
    int sum = 0;
    for(int i = 0; i < str.length(); i++){
        sum += str[i] - '0';
    }

    if(sum == 9){
        cout << " is a multiple of 9 and has 9-degree " << counter << "." << endl;
        return;
    }
    else if(sum < 9){
        cout << " is not a multiple of 9." << endl;
        return;
    }
    counter++;
    run(to_string(sum), counter);
}

int main()
{
    string str;
    while(cin >> str && str != "0"){
        cout << str;
        run(str, 1);
    }
    return 0;
}
