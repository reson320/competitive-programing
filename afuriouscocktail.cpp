#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin >> n >> t;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    if(a[n-1]-(n-1)*t>0) cout << "YES";
    else cout << "NO";
}