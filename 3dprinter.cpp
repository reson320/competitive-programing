#include<bits/stdc++.h>
using namespace std;
struct node{
	int day;
	int printer;
	int statue;
};
int main(){
	queue<node> q;
	node s,next;
	s.day=0;s.printer=1;s.statue=0;
	q.push(s);
	int target;
	cin >> target;
	while(!q.empty()){
		s = q.front();
		q.pop();
		if(target<=s.statue){
			cout << s.day;
			break;
		}
		else{
			next.day = s.day + 1;
			next.printer = s.printer;
			next.statue = s.statue + s.printer;
			q.push(next);
			next.day = s.day + 1;
			next.printer = s.printer*2;
			next.statue = s.statue;
			q.push(next);
		}
		
	}
}