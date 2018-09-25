#include<string>
using namespace std;

class Solution {
public:
	int romanToInt(string s) {
		int charcters[26] = { 0, 0, 100, 500, 0, 0, 0, 0, 1, 0, 0, 50, 1000, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 10, 0, 0 };
		int res = 0, i = 0;
		for (; i < s.length(); ++i) {
			if (i + 1 == s.length() || charcters[s[i] - 'A'] >= charcters[s[i + 1] - 'A']) {
				res += charcters[s[i] - 'A'];
			}
			else {
				res += (charcters[s[i + 1] - 'A'] - charcters[s[i] - 'A']);
				++i;
			}
		}
		return res;
	}
};