#include<bits/stdc++.h>
using namespace std;
map<int,string> ans;
int eval(int a,int b,char c){
	switch (c) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
    }
    return -1;
}

void gen(){
	vector<char> o = {'+','-','*','/'};
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			for(int k=0;k<4;k++){
				vector<int> num = {4,4,4,4};
				vector<char> ops = {o[i],o[j],o[k]};
				for(int t=0;t<ops.size();t++){
					if(ops[t]=='*' || ops[t]=='/'){
						num[t] = eval(num[t],num[t+1],ops[t]);
						num.erase(num.begin()+t+1);
						ops.erase(ops.begin()+t);
						t--;
					}
				}
				for(int t=0;t<ops.size();t++){
					num[t] = eval(num[t],num[t+1],ops[t]);
					num.erase(num.begin()+t+1);
					ops.erase(ops.begin()+t);
					t--;
				}
				ans[num[0]] = "4 " + string(1,o[i]) + " 4 " + string(1,o[j]) + " 4 " + string(1,o[k]) + " 4 = " + to_string(num[0]);
			}
}

int main(){
	gen();
	int m;
	cin >> m;
	while(m--){
		int a;
		cin >> a;
		if(ans.find(a) != ans.end()){
			cout << ans[a] << endl;
		}
		else{
			cout << "no solution" << endl;
		}
	}
	
}