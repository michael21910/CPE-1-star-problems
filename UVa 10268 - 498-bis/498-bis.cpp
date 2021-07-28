#include <bits/stdc++.h>

using namespace std;

int a[1000000];

void run(int length, int x)
{
	long long ans = 0, exp = 1;
	for(int i = length - 1; i >= 0; i--){
		ans += a[i] * exp * (length - i);
		exp *= x;
	}
	cout << ans <<endl;
}
int main()
{
	int x, n;
	while(scanf("%d", &x) != EOF){
		for(n = 0; ; n++){
            cin >> a[n];
			if(getchar() == '\n'){
				break;
			}
		}
		run(n,x);
	}
}
