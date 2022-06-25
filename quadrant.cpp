#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	if(a>0){
	    if(b>0) cout << "1";
	    if(b<0) cout << "4";
	}
	else{
	    if(b<0) cout << "3";
	    else cout << "2";
	}
}