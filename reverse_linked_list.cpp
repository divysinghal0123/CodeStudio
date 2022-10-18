
Node* reverseLinkedList(Node *head)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* nextptr;
    while(curr != NULL)
    {
        nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
    }
    return prev;
    // Write your code here
}
