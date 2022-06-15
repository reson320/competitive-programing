#include <bits/stdc++.h>
using namespace std;
#define TAM 1000100
int a[TAM];
int main() {
  int n;
  scanf ( "%d", &n );
  for ( int i = 0; i < n; ++i )
    scanf ( "%d", a+i );
  sort ( a, a+n );

  int ans = n;
  for ( int i = 0; i < n; ++i )
    ans = min ( ans, n-i-1 + a[i] );
  printf ( "%d\n", ans );
  return 0;
}