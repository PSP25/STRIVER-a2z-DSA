 // Write your code here   
    Node* curr=head;
    Node* last=nullptr;
    // Node* curr=temp->next;

    if(head==nullptr||head->next==nullptr)return head;
    while (curr != nullptr) {
        last=curr->prev;
        curr->prev=curr->next;
        curr->next=last;
        curr=curr->prev;    
    }
    head=last->prev;
    return head;
