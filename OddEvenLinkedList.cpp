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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return head;
        ListNode* f=head,*s=head->next,*temp=s;
        while(f and s and f->next and s->next){
            f->next=s->next;
            s->next=f->next->next;
            f=f->next;
            s=s->next;
        }
        f->next=temp;
        return head;
    }
};
