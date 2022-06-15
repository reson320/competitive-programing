#include<bits/stdc++.h>
using namespace std;
stack<bool> s;
queue<bool> q;
int main(){
	char c;
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> c;
		if(c=='T') q.push(1);
		else q.push(0);
	}

	string tmp;
	getline(cin,tmp);
	getline(cin,tmp);
	stringstream ss(tmp);
	
	bool c1,c2;
	
	while(ss >> c){
		if(c>=65&&c<=90){
			s.push(q.front());
			q.pop();
		}
		if(c=='*'){
			c2 = s.top();
			s.pop();
			c1 = s.top();
			s.pop();
			s.push(c1 && c2);
		}
		if(c=='+'){
			c2 = s.top();
			s.pop();
			c1 = s.top();
			s.pop();
			s.push(c1 || c2);
		}
		if(c=='-'){
			c2 = s.top();
			s.pop();
			s.push(!c2);
		}
	}
	if(s.top()==1) cout << "T";
	else cout << "F";
}