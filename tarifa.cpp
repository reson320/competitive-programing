#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,n;
	int sum=0;
	cin >> x >> n;
	int a;
	for(int i=0;i<n;i++){
	    cin >> a;
	    sum += a;
	}
    cout << x*(n+1)-sum << endl;
}