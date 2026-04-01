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
        vector<int>ans;

        ListNode* current1 = list1;
        ListNode* current2 = list2;

        while(current1 != nullptr){
            ans.push_back(current1->val);
            current1 = current1->next;
        }
        while(current2 != nullptr){
            ans.push_back(current2->val);
            current2 = current2->next;
        }
        sort(ans.begin(), ans.end());

        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        for(int i = 0; i < ans.size(); i++){
            ListNode* newNode = new ListNode(ans[i]);
            if(head == nullptr){
                head = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode;
                tail = newNode;
            }
        }
        return head;
    }
};
