#include<string>
#include<stack>
using namespace std;

class Solution {
public:
	bool isValid(string s) {
		stack<char> st;
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] == '(') {
				st.push(')');
			}
			else if (s[i] == '[') {
				st.push(']');
			}
			else if (s[i] == '{') {
				st.push('}');
			}
			else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
				if (st.empty() || s[i] != st.top()) {
					return false;
				}
				st.pop();
			}
		}
		return st.empty();
	}
};