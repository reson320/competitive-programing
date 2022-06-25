#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int pro=1;
    for(int i=0;i<3;i++){
       cin >> n;
       pro *= n;
    }
    cout << pro;
}