/*
 Given array a of N integers. Given Q queries 
and in each queries given a number x, print 
count of that number in array.

Constrains>
1 <= N <= 1e5
1 <= a[i] <= 1e7
1 <= Q <= 1e5

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n ; ++i){
		cin >> a[i]; 
		}
	int q;
	cin >> q;
	while(q--){
		int x;
		cin >> x;
		int ct = 0;
		for(int i= 0; i< n ; ++i){
			if(a[i] == x){
				ct++; 
				}
		}
		cout<< ct << "\n";
		}
		

}
