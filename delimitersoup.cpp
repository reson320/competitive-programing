#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    stack<char> line;
    cin >> l;
    char c;
    scanf("%c",&c);
    for(int i=0;i<l;i++){
        scanf("%c",&c);
        
        if(c=='('||c=='['||c=='{'){
            line.push(c);
        }
        if(c==')'||c==']'||c=='}'){
            if(line.empty()){
                cout << c << " " << i << endl;
                return 0;
            }
            if(c==')'&&line.top()=='('){
                line.pop();continue;
            }
            if(c==']'&&line.top()=='['){
                line.pop();continue;
            }
            if(c=='}'&&line.top()=='{'){
                line.pop();continue;
            }
            cout << c << " " << i << endl;
            return 0;
        }
    }
    cout << "ok so far" << endl;
}
