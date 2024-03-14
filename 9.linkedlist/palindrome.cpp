//  %%%%%%%%%%%%%%% checking palindrome%%%%%%%%%%
//  O(2^n)TC  SC:O(1)
// ListNode* reverse(ListNode* head){
//     if(head==nullptr||head->next==nullptr) return head;

//         ListNode* newhead=reverse(head->next);
//         ListNode* front=head->next;
//                     front->next=head;
//                     head->next=nullptr;
//         return newhead;
// }
// bool isPalindrome(ListNode* head) {
//         if(head==nullptr||head->next==nullptr)return head;
//         ListNode* fast=head;
//         ListNode* slow=head;
//         while(fast->next!=nullptr && fast->next->next!=nullptr){
//             fast=fast->next->next;
//             slow=slow->next;
//         }
//         ListNode* ptr2=reverse(slow->next);
//         ListNode* ptr1=head;
//         while(ptr2){
//             if(ptr2->val!=ptr1->val)return false;
//             ptr2=ptr2->next;
//             ptr1=ptr1->next;
//         }
//         return true;
//     }