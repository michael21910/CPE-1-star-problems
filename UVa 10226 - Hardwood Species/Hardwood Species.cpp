#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, total = 0;
	string name;
	map<string, double> tree_data;
	cin >> n;
	cin.ignore();
	getline(cin, name);
	int counter = 0;
	while(n--){
        if(counter == 0){
            counter++;
        }
        else{
            cout << endl;
        }
		while (getline(cin, name) && name != ""){
                tree_data[name]++, total++;
		}
		for (auto it = tree_data.begin(); it != tree_data.end(); it++){
			cout << it -> first << " " << fixed << setprecision(4) << it -> second / total * 100 << endl;
		}
		tree_data.clear();
		total = 0;
	}
	return 0;
}
