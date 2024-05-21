#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, m, n, q, r, c;
	cin >> t;
	while(t--){
		cin >> m >> n >> q;
		cout << m << " " << n << " " << q << endl;
		char square[m][n];
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				cin >> square[i][j];
			}
		}
		
		while(q--){
			cin >> r >> c;
			int len=1;  //len是兩邊，但i是一邊，若len=3, 則i=1
			for(int i=1; i<=min(m, n); i++){
				int next=1;
                //若(r, c)=(1, 2)，且i=1，則(a, b)=(0~2, 1~3)，即(r+-i, c+-i)皆為同一字元
				for(int a=r-i; a<=r+i; a++){
					for(int b=c-i; b<=c+i; b++){
						if(a<0 || b<0 || a>=m || b>=n){
							next=0;
							break;
						}
						if(square[a][b]!=square[r][c]){
							next=0;
							break;
						}
					}
				}
				if(next)	len+=2;
				else		break;
			}
			cout << len << endl;
		}
	}
	return 0;
}