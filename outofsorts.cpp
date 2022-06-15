#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,a,c;
	int ans = 0;
	cin >> n >> m >> a >> c;
	long long x[n+1];
	cin >> x[0];
	for(int i=1;i<=n;i++){
		x[i] = (a*x[i-1] + c) % m;
	}
	for(int i=1;i<=n;i++){
		int l = 1;
		int h = n;
		while(l<=h){
			int mid = (l+h)/2;
			if(x[mid] == x[i]){
				ans++;
				break;
			}
			else if(x[i] < x[mid]){
				h = mid - 1;
			}
			else if(x[i]> x[mid]){
				l = mid + 1;
			}
		}
	}
	cout << ans << endl;
}