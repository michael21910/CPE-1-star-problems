#include <bits/stdc++.h>

using namespace std;

int main()
{
    char sentences[102][102] = {0};
    int rowLimit = 0, colLimit = 0;
    while(gets(sentences[rowLimit])){
        colLimit = max( colLimit, (int)strlen(sentences[rowLimit]) );
        ++rowLimit;
    }

    for(int i = 0 ; i < colLimit ; i++){
        for(int j = rowLimit - 1 ; j >= 0 ; j--){
            if(sentences[j][i] == 0){
                cout << " ";
                continue;
            }
            cout << sentences[j][i];
        }
        cout << endl;
    }

    return 0;
}
