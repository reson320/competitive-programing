#include<bits/stdc++.h>
using namespace std;
int main(){
    double c,n,a,b;
    cin >> c >> n;
    double ans=0;
    while(n--){
        cin >> a >> b;
        ans += a*b*c;
    }
    cout.precision(10);
    cout << fixed << ans ;
}