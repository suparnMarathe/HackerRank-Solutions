// https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem?isFullScreen=true

SinglyLinkedListNode *deleteNode(SinglyLinkedListNode *llist, int position)
{
    SinglyLinkedListNode *temp = llist;
    int current = 0;
    if (llist == NULL)
        return llist;
    if (position == 0)
    {
        llist = llist->next;
        free(temp);
        return llist;
    }
    while (current != position - 1)
    {
        temp = temp->next;
        current++;
    }
    SinglyLinkedListNode *prev = temp->next;
    temp->next = temp->next->next;
    free(prev);
    return llist;
}