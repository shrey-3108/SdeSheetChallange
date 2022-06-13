#include <bits/stdc++.h> 
LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    LinkedListNode<int>* dummy  = new LinkedListNode<int>(0);
    dummy->next = head;
    LinkedListNode<int>* slow;
    LinkedListNode<int>* fast;
    slow = fast = dummy;
    if(K == 0) return head;
    for(int i = 1;i<=K;i++){
        fast = fast->next;
    }
    
    while(fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    
    return dummy->next;
}
