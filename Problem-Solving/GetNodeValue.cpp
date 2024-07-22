// https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem?isFullScreen=true

int getNode(SinglyLinkedListNode *llist, int positionFromTail)
{
    SinglyLinkedListNode *temp = llist;
    int totalNodes = 0;
    while (temp != NULL)
    {
        totalNodes++;
        temp = temp->next;
    }
    temp = llist;
    int desiredNodePositioin = totalNodes - 1 - positionFromTail;
    int current = 0;
    while (current < desiredNodePositioin)
    {
        current++;
        temp = temp->next;
    }
    return temp->data;
}