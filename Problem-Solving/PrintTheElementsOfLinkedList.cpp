// https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem?isFullScreen=true

void printLinkedList(SinglyLinkedListNode *head)
{
    SinglyLinkedListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}