#include <bits/stdc++.h> 
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(!first) return second;
    if(!second) return first;
    
    if(first->data < second->data){
        first->next = sortTwoLists(first->next,second);
        return first;
    }
    else{
        second->next = sortTwoLists(first,second->next);
        return second;
    }
}

