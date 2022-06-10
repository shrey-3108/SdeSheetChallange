#include <bits/stdc++.h> 
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(!head or !head->next) return head;
    LinkedListNode<int> *nhead = reverseLinkedList(head->next);
    head->next->next = head;
    head->next = NULL;
    return nhead;
}
