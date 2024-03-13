// if (head == nullptr || head->next == nullptr)   return head;
 
//   Node *dummy1 = new Node(-1);
//   Node *zeros = dummy1;
//   Node *dummy2 = new Node(-1);
//   Node *ones = dummy2;
//   Node *dummy3 = new Node(-1);
//   Node *twos = dummy3;

//   Node *temp = head;

//   while (temp) {
//     if (temp->data == 0) {
//       zeros->next = temp;
//       zeros = zeros->next;
//     } else if (temp->data == 1) {
//       ones->next = temp;
//       ones = ones->next;
//     } else {
//       twos->next = temp;
//       twos = twos->next;
//     }
//     temp = temp->next;
//   }
//   zeros->next = (dummy2->next) ? (dummy2->next) :( dummy3->next);
//   ones->next = dummy3->next;
//   twos->next = nullptr;
//   Node *newHead = dummy1->next;
//   delete dummy1;
//   return newHead;