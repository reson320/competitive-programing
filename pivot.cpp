#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int> ans;
	int lmax=INT_MIN;
	int n;
	cin >> n;
	int a;
	for(int i=0;i<n;i++){
		cin >> a;
		if(a>lmax){
			ans.push(a);
		}
		else{
			while(!ans.empty()&&ans.top()>=a){
				ans.pop();
			}
		}
		lmax = max(lmax,a);
	}
	cout << ans.size();

}