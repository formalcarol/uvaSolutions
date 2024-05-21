#include<bits/stdc++.h>
using namespace std;

int main(){
	int kase;
	cin >> kase;
	for(int k=1; k<=kase; k++){
		int x1, y1, x2, y2, a=0, first=0, second=0;
		cin >> x1 >> y1 >> x2 >> y2;
		
		for(int i=0; i<=(x1+y1); i++)	first+=i;
		first+=x1;
		
		for(int i=0; i<=(x2+y2); i++)	second+=i;
		second+=x2;
		
		cout << "Case " << k << ": " << second-first << endl;
	}
	return 0;
}