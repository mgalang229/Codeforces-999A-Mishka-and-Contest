#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int a[100], n, k;
	cin >> n >> k;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int cnt = 0;
	for(int i = 0; i < n; ++i) {
		if(a[i] <= k) cnt++;
		else break;
	}
	bool ok = true;
	if(cnt == n) ok = false;
	if(ok) {
		for(int i = n - 1; i >= 0; --i) {
			if(a[i] <= k) cnt++;
			else break;
		}
	}
	cout << cnt << "\n";
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
