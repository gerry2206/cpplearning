#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;

int digit_sum(int n){
	if(n == 0) return 0;
	return digit_sum(n/10) + (n%10);
}
int super_digit(int p){
	if(sizeof(p) <= 1)
	return p;
	
	else if(sizeof(p) > 1)
	return digit_sum(p);
	}
	
int main(){
	string s , r = "";
	int k , x;
	cin >> s >> k;
	for(int i=0 ; i< k; ++i){
		r+= s;
	}
	istringstream(s) >> x;
	cout << x << " " << super_digit(x) << "\n";
}
	
	
		
	
	
