#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	pair<int,int> a[10];
	while(cin >> n && n!=-1){
		int sum=0;
		for(int i=0;i<n;i++) cin >> a[i].first >> a[i].second;
		sum += a[0].first * a[0].second;
		for(int i=1;i<n;i++){
			sum += a[i].first * (a[i].second-a[i-1].second);
		}
		cout << sum << " miles" << endl;
	}
	
	
	
}

