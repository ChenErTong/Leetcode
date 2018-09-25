#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.size() == 0) return "";
		size_t min_length = INT_MAX, size = strs.size();
		for (int i = 0; i < size; ++i) {
			min_length = min(min_length, strs[i].size());
		}

		string res = "";
		for (int i = 0; i < min_length; ++i) {
			res += strs[0][i];
			for (int j = 1; j < size; ++j) {
				if (res[i] != strs[j][i]) {
					return res.substr(0, res.length() - 1);
				}
			}
		}
		return res;
	}
};