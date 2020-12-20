#include <stddef.h>
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* tempHead = new ListNode(0);
        ListNode* a = l1;
        ListNode* b = l2;
        ListNode* current = tempHead;
        int carry = 0;
        int sum = 0;
        //ListNode* null = 0;
        while (a != NULL && b != NULL && sum >= 0) {
            int x = (a != NULL) ? a -> val : 0;
            int y = (b != NULL) ? b -> val : 0;
            int sum = carry + x + y;
            carry = sum / 10;
            current -> next = new ListNode(sum % 10);
            current = current -> next;
            if (a != NULL) 
                return a -> next;
            if (b != NULL)
                return b -> next;
        }
        if (carry > 0) {
            current -> next = new ListNode(carry);
        }
        return tempHead -> next;
        
    }
};
_____________________________________________________________________________________
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
#include <stddef.h>
class Solution {
public:
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
ListNode* curr = new ListNode(0);
ListNode* a=l1;
ListNode* b=l2;
ListNode* finalNode = curr;
int carry = 0;
    
    while(a && b){
        if(a){
            carry+= a -> val;
            a = a -> next;
        }
        if(b){
            carry+= b -> val;
            b = b -> next;
        }
        curr -> val = carry % 10;
        carry /= 10;
        // using && will produce a different result and not the expected answer
        if(a || b || carry){
            curr -> next = new ListNode(carry);
            curr = curr -> next;
        }
    }
    return finalNode;
}
};