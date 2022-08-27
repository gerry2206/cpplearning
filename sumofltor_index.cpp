/*
 Given array a of N integers. Given Q queries 
and in each query given L and R , print sum 
of array element from L to R (L and R included)

Constrains>>

1 <= N <= 1e5
1 <= a[i] <= 1e9
1 <= Q <= 1e5
1 <= L , R <= N

*/

#include<bits/stdc++.h> 
using namespace std;
const int N = 1e5 + 10;
int a[N] ;

int main(){
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i){
		cin >> a[i];
	}
	
	int q;
	cin >> q;
	while(q--){
		int l, r;
		cin >> l >> r;
		long long sum = 0;
		for(int i=l; i<=r; ++i){
			sum += a[i];
		}
cout << sum << "\n";
}
}

