Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
{
    // Write your code here.

    if (first == NULL)
        return second;
    if (second == NULL)
        return first;

    if (first->data > second->data)
        std::swap(first, second);
    Node<int> *result = first;

    while (first != NULL && second != NULL)
    {
        Node<int> *temp = NULL;
        while (first != NULL && first->data <= second->data)
        {
            temp = first;
            first = first->next;
        }
        temp->next = second;
        std::swap(first, second);
    }
    return result;
}
