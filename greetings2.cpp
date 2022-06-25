#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    cout << s[0];
    for(int i=1;i<s.size()-1;i++){
        cout << s[i]<<s[i];
    }
    cout << s[s.size()-1];
}   