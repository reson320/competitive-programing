#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string name,food;
    while(cin >> n && n){
        vector<pair<string,string> > ans;
        for(int i=0;i<n;i++){
            cin >> name;
            cin.ignore();
            string tmp;
            getline(cin,tmp);
            stringstream ss(tmp);
            while(getline(ss,food,' ')){
                ans.push_back({food,name});
            }
        }
        sort(ans.begin(),ans.end());
        string str;
        for(int i=0;i<ans.size();i++){
            if(ans[i].first != str){
                if(i!=0) cout << endl;
                cout << ans[i].first;
                str = ans[i].first;
            }
            cout << " " << ans[i].second;
            
        }
        cout << "\n\n";
        
    }
}
