#include<bits/stdc++.h>
using namespace std;
int finger[15][10]={{0,0,0,0,0,0,0,0,0,0}, 
				    {0,1,1,1,0,0,1,1,1,1}, 
				    {0,1,1,1,0,0,1,1,1,0}, 
				    {0,1,1,1,0,0,1,1,0,0}, 
				    {0,1,1,1,0,0,1,0,0,0}, 
				    {0,1,1,1,0,0,0,0,0,0}, 
				    {0,1,1,0,0,0,0,0,0,0}, 
				    {0,1,0,0,0,0,0,0,0,0}, 
				    {0,0,1,0,0,0,0,0,0,0}, 
				    {1,1,1,1,0,0,1,1,1,0}, 
				    {1,1,1,1,0,0,1,1,0,0}, 
				    {1,1,1,1,0,0,1,0,0,0}, 
				    {1,1,1,1,0,0,0,0,0,0}, 
				    {1,1,1,0,0,0,0,0,0,0}, 
				    {1,1,0,0,0,0,0,0,0,0}};
				  //

int main(){
	int kase;
	cin >> kase;
	cin.ignore();
	while(kase--){
		string str;
		getline(cin, str);
		//cout << str << endl;
		int ans[10]={0};
		int before[10]={0};
		
		for(auto i: str){
			//cout << i << ' ';
			if(i==' '){
				for(int j=0; j<10; j++){
					if(before[j]!=1){
						ans[j]+=finger[0][j];
					}
					before[j]=finger[0][j];
				}
			}
			else if(i=='c'){
				for(int j=0; j<10; j++){
					if(before[j]!=1){
						ans[j]+=finger[1][j];
					}
					before[j]=finger[1][j];
					//cout << before[j];
				}
			}
			else if(i=='d'){
				for(int j=0; j<10; j++){
					if(before[j]!=1){
						ans[j]+=finger[2][j];
					}
					before[j]=finger[2][j];
				}
			}
			else if(i=='e'){
				for(int j=0; j<10; j++){
					if(before[j]!=1){
						ans[j]+=finger[3][j];
					}
					before[j]=finger[3][j];
				}
			}
			else if(i=='f'){
				for(int j=0; j<10; j++){
					if(before[j]!=1){
						ans[j]+=finger[4][j];
					}
					before[j]=finger[4][j];
				}
			}
			else if(i=='g'){
				for(int j=0; j<10; j++){
					if(before[j]!=1){
						ans[j]+=finger[5][j];
					}
					before[j]=finger[5][j];
				}
			}
			else if(i=='a'){
				for(int j=0; j<10; j++){
					if(before[j]!=1){
						ans[j]+=finger[6][j];
					}
					before[j]=finger[6][j];
				}
			}
			else if(i=='b'){
				for(int j=0; j<10; j++){
					if(before[j]!=1){
						ans[j]+=finger[7][j];
					}
					before[j]=finger[7][j];
				}
			}
			else if(i=='C'){
				for(int j=0; j<10; j++){
					if(before[j]!=1){
						ans[j]+=finger[8][j];
					}
					before[j]=finger[8][j];
				}
			}
			else if(i=='D'){
				for(int j=0; j<10; j++){
					if(before[j]!=1){
						ans[j]+=finger[9][j];
					}
					before[j]=finger[9][j];
				}
			}
			else if(i=='E'){
				for(int j=0; j<10; j++){
					if(before[j]!=1){
						ans[j]+=finger[10][j];
					}
					before[j]=finger[10][j];
				}
			}
			else if(i=='F'){
				for(int j=0; j<10; j++){
					if(before[j]!=1){
						ans[j]+=finger[11][j];
					}
					before[j]=finger[11][j];
				}
			}
			else if(i=='G'){
				for(int j=0; j<10; j++){
					if(before[j]!=1){
						ans[j]+=finger[12][j];
					}
					before[j]=finger[12][j];
				}
			}
			else if(i=='A'){
				for(int j=0; j<10; j++){
					if(before[j]!=1){
						ans[j]+=finger[13][j];
					}
					before[j]=finger[13][j];
				}
			}
			else if(i=='B'){
				for(int j=0; j<10; j++){
					if(before[j]!=1){
						ans[j]+=finger[14][j];
					}
					before[j]=finger[14][j];
				}
			}
		}
		for(int i=0; i<10; i++){
			cout << ans[i];
			if(i!=9)	cout << ' ';
		}
		cout << endl;
	}
	return 0;
}