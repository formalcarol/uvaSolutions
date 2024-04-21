#include<bits/stdc++.h>
using namespace std;

void divide(int n, int arr[], int& len){
	for(len=0; n!=0; len++){
		arr[len] = n%10;
		n /= 10;
	}
}

int main(){
	int a, b;
	while(cin >> a >> b && (a != 0 || b != 0)){
		int lenA, lenB;
		int arrA[11]={0};	//若a=123，則lenA=3, arrA={3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0}
		int arrB[11]={0};
		int sum[12]={0};
		
		divide(a, arrA, lenA);
		divide(b, arrB, lenB);
		
		int ans=0;
		int len=max(lenA, lenB);
		for(int i=0; i<len; i++){
			sum[i] += (arrA[i]+arrB[i]);	//記得用+=，因為前面可能有+1，若直接=，則沒+1到
			if(sum[i]>=10){
				sum[i] -= 10;
				sum[i+1]++;
				ans++;
				
			}
		}
		
		if(ans==0)		cout << "No carry operation." << endl;
		else if(ans==1)	cout << "1 carry operation." << endl;
		else			cout << ans << " carry operations." << endl;
	}
	return 0;
}