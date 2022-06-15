#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char> line;
    string str;
    stack<char> ans;
    char c;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(str[i]=='<'){
            if(line.size()){
                line.pop();
            }
        }
        else{
            line.push(str[i]);
        }
    }
    while(line.size()){
        ans.push(line.top());
        line.pop();
    }
    while(ans.size()){
        cout << ans.top();
        ans.pop();
    }
}