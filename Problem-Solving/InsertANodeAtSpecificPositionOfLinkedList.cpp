// https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem?isFullScreen=true

SinglyLinkedListNode *insertNodeAtPosition(SinglyLinkedListNode *llist, int data, int position)
{
    SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
    if (llist == NULL)
        return new_node;
    SinglyLinkedListNode *temp = llist;
    int current = 0;
    while (current < position - 1)
    {
        temp = temp->next;
        current++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    return llist;
}