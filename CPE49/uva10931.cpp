#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin >> n && n!=0){
		int ans = 0;
		stack<int> st;
		for(int i=n; i>0; i/=2){
			ans += i%2;
			st.push(i%2);
		}
		cout << "The parity of ";
		while(st.size()){
			cout << st.top();
			st.pop();
		}
		cout << " is " << ans << " (mod 2)." << endl;
	}
	return 0;
}