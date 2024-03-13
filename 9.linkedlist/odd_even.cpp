//  ListNode* odd=head;       
//         if(head==nullptr || head->next==nullptr){
//             return head;
//         }
//         ListNode* even=head->next;
//         ListNode* evenHead=head->next;
//         while(even!=nullptr && even->next!=nullptr){
//             odd->next=odd->next->next;
//             odd=odd->next;
//             even->next=even->next->next;
//             even=even->next;
//         }
//         odd->next=evenHead;
//         return head;