#include <bits/stdc++.h>
using namespace std;

int main(){
	int kase, mon, da;
	cin >> kase;
	int month[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string day[7]={"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	while(kase--){
		cin >> mon >> da;
		int days=0;
		for(int i=0; i<mon-1; i++){
			days += month[i];
		}
		days += da;
		days -= 1;	//because 1/1 is Saturday, but 1%7=1
		cout << day[days%7] << endl;
	}
	return 0;
}