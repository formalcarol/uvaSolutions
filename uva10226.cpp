//uva10420
#include<bits/stdc++.h>
using namespace std;

int main(){
	int kase;
	string str;
	cin >> kase;
	cin.ignore();           //忽略數字後的空格
	getline(cin, str);
	
	while(kase--){
		int num=0;
		map<string, float> cnt;
		cnt.clear();
		
		while(getline(cin, str) && !str.empty()){   //若之後還有空格，就是下一筆資料，就要while結束
			cnt[str]++; 
			num++;
		}
		
		cout.precision(4);
		for(auto i=cnt.begin(); i!=cnt.end(); i++){
			cout << i->first << " " << fixed << (i->second/num)*100 << endl;
		}
		
		if(kase)	cout << endl;       //資料和資料間有空格
	}  
	return 0;
}