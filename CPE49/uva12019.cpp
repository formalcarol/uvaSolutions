#include<bits/stdc++.h>
using namespace std;
//1/1 sat
int main(){
	int kase;
	cin >> kase;
	int month[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string week[7]={"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
	
	while(kase--){
		int mon, day, days=0;
		cin >> mon >> day;
		for(int i=1; i<mon; i++){
			days+=month[i-1];
		}
		days+=day;
		cout << week[days%7] << endl;
	}
	return 0;
}