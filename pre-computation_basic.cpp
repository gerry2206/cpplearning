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
 const int M =1e9 + 7;
 
 int main(){
	 int t;
	 cin >> t;
	 while(t--){
		 int n;
		 cin >> n;
	   long long fact = 1;
	   for(int i=2; i<=n; ++i){
		   fact = (fact * i) % M;
	   }
	   cout << fact << "\n";
   }
} 
 
