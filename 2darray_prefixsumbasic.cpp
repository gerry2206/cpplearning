/*
Given 2D array of N*N integers. Given Q
queries and in each queries given a,b,c and d
Print sum of square represented by (a,b) as
top left point and (c,d) as bottom right point

Constrains>>
1 <= N <= 1e3
1 <= a[i][j] <= 1e9
1 <= Q <= 1e5
1 <= a,b,c,d <= N

*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int ar[N][N];

int main(){
	int n;
	cin >> n;
	for(int i=1; i<=n;++i){
		for(int j=1; j<=n; ++j){
			cin >> ar[i][j];
		}
	}
	int q;
	cin >> q;
	while(q--){
		int a, b, c, d;
		cin >> a>> b >> c >> d;
		long long sum= 0;
		for(int i=a; i<=c; ++i){
			for(int j=b; j<=d; ++j){
				sum += ar[i][j];
			}
		}
		cout << sum << "\n";
	}
}			
	

