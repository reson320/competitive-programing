#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	bitset<1000001> mem;
	int t = sqrt(n);
	int cnt[n/t+1]={0};
	mem.reset();
	char c;
	int i,l,r;
	for(int j=0;j<k;j++){
		cin >> c;
		if(c == 'F'){
			cin >> i;
			mem.flip(i);
			if(mem[i] == 1){
				cnt[(i-1)/t]++;
			}
			else{
				cnt[(i-1)/t]--;
			}
			continue;
		}
		if(c == 'C'){
			cin >> l >> r;
			int sum = 0;
			for(int i=((l-1)/t)+1;i<(r-1)/t;i++){
				sum += cnt[i];
			}
			if((l-1)/t == (r-1)/t){
				for(int i=l;i<=r;i++){
					sum += mem[i];
				}
			}
			else{
				for(int i=l;i<=((l-1)/t+1)*t;i++){
				sum += mem[i];
				}
				for(int i=((r-1)/t)*t+1;i<=r;i++){
				sum += mem[i];
				}
			}
			
			cout << sum << "\n";
		}
	}
}