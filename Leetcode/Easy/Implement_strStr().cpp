#include<string>
using namespace std;

class Solution {
public:
	int strStr(string haystack, string needle) {
		bool isT;
		int h_l = haystack.length(), n_l = needle.length();
		for (int i = 0; i <= h_l - n_l; ++i) {
			isT = true;
			for (int j = 0; j < n_l; ++j) {
				if (haystack[i + j] != needle[j]) {
					isT = false;
					break;
				}
			}
			if (isT) return i;
		}
		return -1;
	}
};