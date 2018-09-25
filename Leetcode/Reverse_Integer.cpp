#include<algorithm>
using namespace std;

class Solution {
public:
	int reverse(int x) {
		bool flag = (x >= 0);
		x = abs(x);
		long long res = 0;
		while (x) {
			res = res * 10 + x % 10;
			x /= 10;
		}
		res = flag ? res : -res;
		return res <= INT_MAX && res >= INT_MIN ? res : 0;
	}
};