//       add 1 to ano. presented in ll


// if(head==nullptr) return carry;
//         carry=helper(head->next,carry);
//         int sum=carry+head->data;
//         head->data=(sum)%10;
//         carry=(sum)/10;
//         return carry;
//     }
// Node *addOne(Node *head)
// {
//     // Write Your Code Here.

//     int carry=1;
//      carry=helper(head,carry);
//      if(carry==1){
//         Node* newnode=new Node(1);
//         newnode->next=head;
//         head=newnode;
//      }
//      return head;