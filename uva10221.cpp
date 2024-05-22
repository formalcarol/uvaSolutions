#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)

int main(){
	double s, a;
	string str;
	while(cin >> s >> a >> str){
		double arc, chord;
		
		if(str=="deg"){
			arc = 2*PI*(6440+s)*(a/360);
			chord = (6440+s)*sin(a*PI/(2*180))*2;
		}
		else{
			arc = 2*PI*(6440+s)*(a/(360*60));
			chord = (6440+s)*sin(a*PI/(2*180*60))*2;
		}
		
		cout.precision(6);
		cout << fixed << arc << " " << fixed << chord << endl;
	}
	return 0;
}