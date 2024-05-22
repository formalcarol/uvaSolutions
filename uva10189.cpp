#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, kase=1;
	while(cin >> n >> m && (n!=0||m!=0)){
		if(kase>=2)	cout << endl;
		char square[n][m];
		int ans[n][m];
		
		//input to square
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> square[i][j];
				ans[i][j]=0;
			}
		}
		
		//count to ans
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(square[i][j]=='*'){
					for(int k=i-1; k<=i+1; k++){
						for(int w=j-1; w<=j+1; w++){
							if(k<0||k>=n||w<0||w>=m)	continue;
							ans[k][w]++;
						}
					}
				}
			}
		}
		
		cout << "Field #" << kase++ << ":" << endl;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(square[i][j]=='*')	cout << '*';
				else	cout << ans[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}