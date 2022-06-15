#include<bits/stdc++.h>
using namespace std;
int m,n;
char mp[100][100];
int dx[8] = {-1,-1,0,1,1,1,0,-1};
int dy[8] = {0,1,1,1,0,-1,-1,-1};
int ans=0;
void dfs(int x,int y){	
	mp[x][y] = '.';
	
	for(int i=0;i<8;i++){
		int tx = x + dx[i];
		int ty = y + dy[i];
		if((tx>=0&&ty>=0) && mp[tx][ty]=='#'){ 									
			dfs(tx,ty);
		}                                       
	} 
	return;
}
	int main(){
		cin >> m >> n; 
		memset(mp,'.',sizeof(mp));
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin >> mp[i][j];	
				
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++){
				if(mp[i][j]=='#'){
					dfs(i,j);
					ans++;
				}
			}
		cout << ans << endl;

}
	