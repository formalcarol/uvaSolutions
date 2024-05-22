#include<bits/stdc++.h>
using namespace std;
//north  0->2, 3->0, 1->3, 2->1
//south  2->0, 0->3, 3->1, 1->2
//east   0->4, 4->1, 1->5, 5->0
//west   4->0, 1->4, 5->1, 0->5
int main(){
	int n;
	while(cin >> n && n!=0){
		string str;
		int dice[6]={1, 6, 2, 5, 4, 3};	//up, down, north, south, east, west
		while(n--){
			cin >> str;
			int a=dice[0], b=dice[1], c=dice[2], d=dice[3], e=dice[4], f=dice[5];
			if(str=="north"){
				dice[2]=a;
				dice[0]=d;
				dice[3]=b;
				dice[1]=c;
			}
			else if(str=="south"){
				dice[3]=a;
				dice[1]=d;
				dice[2]=b;
				dice[0]=c;
			}
			else if(str=="east"){
				dice[4]=a;
				dice[1]=e;
				dice[5]=b;
				dice[0]=f;
			}
			else if(str=="west"){
				dice[5]=a;
				dice[0]=e;
				dice[4]=b;
				dice[1]=f;
			}
		}
		cout << dice[0] << endl;
	}
	return 0;
}