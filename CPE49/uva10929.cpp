#include<bits/stdc++.h>
using namespace std;

//若 abs(奇數位的總和-偶數位的總和) 為11的倍數，則該數為11的倍數
int main(){
	string a;
	while(cin >> a && (a!="0")){
		long long int sum[2]={0};		//1個是奇數位的總和，另一個是偶數位的總和
		for(int i=0; i<a.size(); i++){
			sum[i%2] += (a[i]-'0');		//不用真的在乎從個數位開始分奇偶數，反正最後要abs()
		}
		if(abs(sum[0]-sum[1])%11)	cout << a << " is not a multiple of 11." << endl;
		else						cout << a << " is a multiple of 11." << endl;
	}
	return 0;
}