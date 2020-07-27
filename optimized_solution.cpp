#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(int &it : a) cin >> it;
	int ans = 0;
	while(!a.empty() && a.back() <= k) {
		++ans;
		a.pop_back();
	}
	reverse(a.begin(), a.end());
	while(!a.empty() && a.back() <= k) {
		++ans;
		a.pop_back();
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//int T;
	//cin >> T;
	//for(int nr = 1; nr <= T; ++nr) {
		//test_case();
	//}
	test_case();
	return 0;
}
