#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b;
	int n;
	cin >> n;
	long long sum=0;
	for(int i=0;i<n;i++){
	    cin >> a ;
	    b = a %10;
	    a = a/10;
	    sum += pow(a,b);
	}
	cout << sum;
	
}