#include <bits/stdc++.h>
Node *addTwoNumbers(Node *a, Node *b)
{
    Node *nhead = new Node(-1);
    Node *temp = nhead;
    int carry = 0;
    while(a and b){
        int data = a->data + b->data + carry;
        temp->next = new Node(data%10);
        carry = data/10;
        temp = temp->next;
        a = a->next;
        b = b->next;
    }
    while(a){
        int data = a->data + carry;
        temp->next = new Node(data%10);
        carry = data/10;
        temp = temp->next;
        a = a->next;
    }
    while(b){
        int data = b->data + carry;
        temp->next = new Node(data%10);
        carry = data/10;
        temp = temp->next;
        b = b->next;
    }
   if(carry){
       temp->next = new Node(1);
   }
    return nhead->next;
}
