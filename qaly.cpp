#include<bits/stdc++.h>
using namespace std;
int main(){
	float a,b;
	int n;
	cin >> n;
	float sum =0;
	for(int i=0;i<n;i++){
	    cin >> a >> b;
	    sum += a*b;
	}
	cout << sum << endl;
}