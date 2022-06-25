#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<string> s;
	vector<string> b;
	int r,c;
	cin >> r >> c ;
	string tmp;
	for(int i=0;i<r;i++){
		cin >> tmp;
		b.push_back(tmp);
	}
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout << b[i][j];
			
		}
	}
}