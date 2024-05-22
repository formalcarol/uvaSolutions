#include<bits/stdc++.h>
using namespace std;

int main(){
	string n;
	while(cin >> n && n!="0"){
		int degree=1, v=0;
		for(auto i: n)	v+=(i-'0');
		while(v%9==0 && v!=9){
			degree++;
			int s=0;
			for(int i=v; i>0; i/=10)	s+=(i%10);
			v=s;
		}
		
        //前面若degree=0, while沒有第二個判斷，就直接用degree寫if就行，但有時間限制，愈少進入迴圈，愈節省時間
		if(v%9!=0)	cout << n << " is not a multiple of 9." << endl;
		else	cout << n << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
	}
	return 0;
}