#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    int ans = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        ans += a;
    }
    cout << ans - n + 1;
}