/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
   public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> sorted;
        while (list1) {
            sorted.push_back(list1->val);
            list1 = list1->next;
        }
        while (list2) {
            sorted.push_back(list2->val);
            list2 = list2->next;
        }
        sort(sorted.begin(), sorted.end());
        if (sorted.empty()) {
            return nullptr;
        }
        ListNode* head = new ListNode(sorted[0]);
        ListNode* temp = head;
        for (int i = 1; i < sorted.size(); i++) {
            temp->next = new ListNode(sorted[i]);
            temp = temp->next;
        }
        return head;
    }
};
