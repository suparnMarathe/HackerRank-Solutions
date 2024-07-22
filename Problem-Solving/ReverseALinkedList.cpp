// https://www.hackerrank.com/challenges/reverse-a-linked-list/problem?isFullScreen=true

SinglyLinkedListNode *reverse(SinglyLinkedListNode *llist)
{
    if (llist == NULL || llist->next == NULL)
        return llist;
    SinglyLinkedListNode *new_node = reverse(llist->next);
    llist->next->next = llist;
    llist->next = NULL;
    return new_node;
}