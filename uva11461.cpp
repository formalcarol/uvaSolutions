#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	bool t[100001]={false};
	for(int i=1; i<=sqrt(100000);i++){
		t[i*i]=true;
	}
	while((cin >> a >> b)&&(a!=0)&&(b!=0)){
		int cnt=0;
		for(int i=a; i<=b; i++){
			if(t[i]){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}