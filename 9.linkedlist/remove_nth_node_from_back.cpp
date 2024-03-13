// ListNode* fast=head;
//         ListNode* slow=head;
//         for(int i=0;i<n;i++){
//             fast=fast->next;
//         }
//          if(fast==nullptr)return head->next;
//         while(fast->next){
//             if(fast->next==nullptr)return head->next;
//             slow=slow->next;
//             fast=fast->next;
//         }
//         slow->next=slow->next->next;
        
//         return head;