#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k,d;
    
    for(int i=1;i<=n;i++){
    	cin >> k >> d;
    	cout << k << " " << d+(d*(d+1))/2 << endl;
    }
	
}