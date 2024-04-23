#include<bits/stdc++.h>
using namespace std;

int main(){
	int kase;
	string country;
	string name;
	map<string, int> cnt;		//map的key會自動排序，就不用再sort
	
	cin >> kase;
	while(kase--){
		cin >> country;
		cnt[country]++;
		getline(cin, name);		//人名不重要，但也要讀取，後續不用處理而已
	}

	for(auto i=cnt.begin(); i!=cnt.end(); i++){		//i是指標
		cout << i->first << " " << i->second << endl;
	}
	return 0;
}

/*
第17-19行若用object，則需要 auto& 和 i.first
for(auto& i: cnt) {
	cout << i.first << " " << i.second << endl;
}
*/