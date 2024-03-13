//  ListNode* temp1=l1;
//         ListNode* temp2=l2;
//         ListNode* dummy=new ListNode(-1);
//         ListNode* curr=dummy;
//         int carry=0;
//         int sum=carry;

//         while(temp1!=nullptr || temp2!=nullptr){
//             int sum=carry;
//             if(temp1)sum+=temp1->val;
//             if(temp2)sum+=temp2->val;
//             ListNode* x=new ListNode(sum%10);
//             carry=sum/10;
//             curr->next=x;
//             curr=curr->next;

//             if(temp1) temp1=temp1->next;
//             if(temp2) temp2=temp2->next;
//         }
//         if(carry) {
//         ListNode* x=new ListNode(carry);
//         curr->next=x;
//         }
//         ListNode* head=dummy->next;
//         return head;