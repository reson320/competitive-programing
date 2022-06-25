#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a;
    int sum =0;
    for(int i=0;i<n;i++){
        cin >> a;
        sum += a;
    }
    cout << sum;
}