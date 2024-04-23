#include<bits/stdc++.h>
using namespace std;
//1
//2 1
//3 10 5 16 8 4 2 1
//4 2 1
//5 16 8 4 2 1
//6 3 10 5 16 8 4 2 1
//7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
//8 4 2 1
//9 28 14 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
//10 5 16 8 4 2 1
int main(){
	int a, b;
	while(cin >> a >> b){
		cout << a << " " << b << " ";
		if(a>b){
			int temp=a;
			a=b;
			b=temp;
		}
		
		int maxLen=0;
		for(int i=a; i<=b; i++){
			int len=1, k=i;
			while(true){
				if(k==1)	break;
				if(k%2==1)	k=3*k+1;
				else		k/=2;
				len++;
			}
			maxLen=max(len, maxLen);
		}
		
		cout << maxLen << endl;
	}
	return 0;
}