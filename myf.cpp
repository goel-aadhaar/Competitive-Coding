#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
	int minInsertions(string s) {
		stack<char> st;
		int count = 0;
		for (int i = 0; i < s.length() - 1; ) {
			if (s[i] == '(') {
				st.push(s[i]);
				s[i] = 0;
				i++;
			} else if ((i + 1 != s.length()) && (s[i] == ')' && s[i + 1] == ')')) {
				if (st.size() == 0) {
					count++;
					s[i + 1] = 0;
					i += 2;
				} else {
					st.pop();
					s[i + 1] = 0;
					i += 2;
				}
			} else {
				if (st.size() == 0) {
					count += 2;
					i++;
				} else {
					count++;
					i++;
					st.pop();
				}
			}
		}
		if (s[s.length() - 1]) {
			if (s[s.length() - 1] == '(') {
				st.push(s[s.length() - 1]);
			} else {
				if (st.size() != 0) {
					count++;
					st.pop();
				} else {
					count += 2;
				}
			}
		}
		count += st.size() * 2;
		return count;
	}
};
int main() {
	// freopen("D:\\Temp\\input.txt", "r", stdin);
	// freopen("D:\\Temp\\output.txt", "w", stdout);
	Solution soln;
	string s;
	cin >> s;
	int res = soln.minInsertions (s);
	cout << res;
}