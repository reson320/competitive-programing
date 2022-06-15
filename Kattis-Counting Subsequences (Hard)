#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        int nums[n+1];
        nums[0] = 0;
        int num;
        for(int i=0;i<n;i++){
            cin >> num;
            nums[i+1] = nums[i] + num;
        }
        int ans = 0;
        map<int,int> cnt;
        cnt[0] = 1;
        for(int i=1;i<=n+1;i++){
            ans+=cnt[nums[i]-47];
            cnt[nums[i]]++;
            //  if( nums[i]== 47 + nums[j])     
        }
        cout << ans << endl;
    }
}
