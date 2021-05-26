 #include <bits/stdc++.h>

 using namespace std;

 int main()
 {
     string str;
     while(cin >> str && str != "0"){
        int odd = 0, even = 0;
        for(int i = 0; i < str.length(); i++){
            (i % 2 == 0) ? even += str[i] - '0' : odd += str[i] - '0';
        }
        (abs(odd - even) % 11 == 0) ? cout << str <<  " is a multiple of 11." << endl : cout << str << " is not a multiple of 11." << endl;
     }
     return 0;
 }
