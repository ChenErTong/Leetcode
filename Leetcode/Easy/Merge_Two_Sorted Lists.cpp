#include<iostream>
using namespace std;

struct ListNode {
	int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode * mergeTwoLists(ListNode* l1, ListNode* l2) {
		if (l1 == NULL) return l2;
		if (l2 == NULL) return l1;
		ListNode* cl = new ListNode(INT_MIN), *n1 = l1, *n2 = l2, *clh = cl;
		while (n1 != NULL && n2 != NULL) {
			if (n1->val < n2->val) {
				cl->next = new ListNode(n1->val);
				cl = cl->next;
				n1 = n1->next;
			}
			else {
				cl->next = new ListNode(n2->val);
				cl = cl->next;
				n2 = n2->next;
			}
		}
		if (n1 != NULL) {
			cl->next = n1;
		}
		if (n2 != NULL) {
			cl->next = n2;
		}
		return clh->next;
	}
};