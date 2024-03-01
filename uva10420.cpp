#include <bits/stdc++.h>
using namespace std;

int main(){
	int kase;
	cin >> kase;
	map<string, int> ans;
	
	while(kase--){
		string str, name;
		cin >> str >> name >> name;	//name can be ignored
		ans[str]++;
	}
	
	for(auto& i: ans){
		cout << i.first << " " << i.second << endl;
	}
	return 0;
}