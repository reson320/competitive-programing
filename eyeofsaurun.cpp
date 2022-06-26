#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	if(s.size()%2){
		cout << "fix";
		return 0;
	}
	for(int i=0;i<s.size();i++){
		if(i==s.size()/2-1){
			cout << "correct";
			return 0;
		}
		if(s[i]!=s[s.size()-1-i]){
			cout << "fix";
			return 0;
		}
	}
}