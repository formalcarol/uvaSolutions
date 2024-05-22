#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	bool m[100001]={false};
	for(int i=1; i<sqrt(100000); i++)	m[i*i]=true;
	//建立100001的陣列，只要是完全平方數就為1，其餘為0
	
	while(cin >> a >> b && (a!=0||b!=0)){
		int cnt=0;
		for(int i=a; i<=b; i++){
			if(m[i])	cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}