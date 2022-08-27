/*
 Given T test cases and in each test case a
 number N. Print its factorial for each
 test case % M
 where M = 1e9 + 7. 
 
 Constraints
 1 <= T <= 1e5
 1 <= N <= 1e5
 */

#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int M = 1e9 + 7;
const int N = 1e5 + 9;
 
int fact[N];
 
int32_t main(){
	 fact[0] = fact[1] = 1;
	 for(int i = 2; i < N; ++i){
		 fact[i] = (fact[i-1] * i) % M;
	 }
	 int t;
	 cin >> t;
	 while(t--){
		int n;
		cin >> n;
		cout << fact[n] << "\n";
   }
} 
 
