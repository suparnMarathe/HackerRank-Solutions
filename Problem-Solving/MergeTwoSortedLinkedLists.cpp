// https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem?isFullScreen=true

SinglyLinkedListNode *mergeLists(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(0);
    SinglyLinkedListNode *newPtr = newNode;

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data <= head2->data)
        {
            newPtr->next = head1;
            head1 = head1->next;
        }
        else
        {
            newPtr->next = head2;
            head2 = head2->next;
        }
        newPtr = newPtr->next;
    }
    if (head1 != NULL)
        newPtr->next = head1;
    else
        newPtr->next = head2;
    return newNode->next;
}