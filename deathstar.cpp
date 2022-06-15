#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int ans=0;
	int num;
	cin >> n;
	for(int i=0;i<n;i++){
		ans = 0;
		for(int j=0;j<n;j++){
			cin >> num;
			ans |= num;
		}
		cout << ans << " ";
	}
}