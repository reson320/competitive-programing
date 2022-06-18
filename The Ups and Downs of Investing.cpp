#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,n,m;
	cin >> s >> n >> m;
	int nums[s];
	for(int i=0;i<s;i++){
		cin >> nums[i];
	}
	vector<int> d;
	int l=1;
	int up=0,down=0;
	if(s==1){
		cout << "0 0";	
		return 0;
	}
	for(int i=1;i<s;i++){
		l++;
		if(i==s-1||(nums[i]-nums[i-1])*(nums[i+1]-nums[i])<0){
			if(nums[i]-nums[i-1]>0){
				d.push_back(l);	
			}
			else{
				d.push_back(-l);
			}
			l = 1;
		}
	}
	for(int i=1;i<d.size();i++){
		if(d[i-1]>=n&&d[i]<=(-n)){
			up++;
		}
		else if(d[i-1]<=(-m)&&d[i]>=m){
			down++;
		}
	}
	cout << up << " " << down;
}