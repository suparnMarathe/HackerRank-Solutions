// https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem?isFullScreen=true

void reversePrint(SinglyLinkedListNode *llist)
{
    SinglyLinkedListNode *temp = llist;
    if (llist == NULL)
        return;
    reversePrint(temp->next);
    cout << llist->data << endl;
}