// https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem?isFullScreen=true

SinglyLinkedListNode *insertNodeAtHead(SinglyLinkedListNode *llist, int data)
{
    SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
    if (llist == NULL)
        return new_node;
    new_node->next = llist;
    llist = new_node;
    return new_node;
}