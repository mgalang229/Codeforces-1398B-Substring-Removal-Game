#include <bits/stdc++.h>

using namespace std;

void test_case() {
	string s;
	cin >> s;
	vector<int> a;
	for(int i = 0; i < (int) s.size(); ++i) {
		if(s[i] == '1') {
			int j = i;
			while(j + 1 < (int) s.size() && s[j+1] == '1') {
				++j;
			}
			a.push_back(j - i + 1);
			i = j;
		}
	}
	sort(a.rbegin(), a.rend());
	int ans = 0;
	for(int i = 0; i < (int) a.size(); i += 2) {
		ans += a[i];
	}
	cout << ans << "\n";
		
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
