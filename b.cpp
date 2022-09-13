#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;
	
	for(int i = 0; i < 3; i++) {
		s += '-';
	}
	
	for(int i = 0; i < n; i++) {
		if(s[i + 2] == 0) {
			int x = s[i] - '0';
			x = x * 10 + (s[i + 1] - '0');
			cout << x << " ";
			i += 2;
		} else {
			cout << s[i] - '0' << " ";
		}
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int tc = 1;
	cin >> tc;
	for(int i = 1; i <= tc; i++) {
		solve();
	}
	return 0;
}
	
