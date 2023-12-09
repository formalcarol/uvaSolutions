#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    while(cin>>n && n!=0){
        int k = sqrt(n);
        if(k*k < n) k++;
        int t = n-(k-1)*(k-1);
        if(k%2 == 0){
            if(t <= k)	cout << t << " " << k << endl;
            else		cout << k << " " << k-(t-k) << endl;
        }
        else{
            if(t <= k)	cout << k << " " << t << endl;
     		else 		cout << k-(t-k) << " " << k << endl;
        }
    }
    return 0;
}