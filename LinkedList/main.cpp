#include <iostream>
#include <stdlib.h>

using namespace std;

class Node
{
    int value;
    Node next;
    Node prev;
private:
    Node(int, Node, Node);
};

Node::Node(int val, Node prev, Node next)
{
    value = val;
    this.next = next;
    this.prev = prev;
}

/**
    Linked List class for use in stacks and queues. Currently only
    supports adding and removing from ends
*/
class LinkedList
{
    //make these private later
    Node first;
    Node last;
    int size;
public:
    LinkedList();
    void addFirst(int);
    void addLast(int);
    int removeFirst();
    int removeLast();
};

LinkedList::LinkedList()
{
    first = Node(0, NULL, NULL);
    last  = Node(0, first, NULL);
    first.next = last;
    size = 0;
}

void LinkedList::addFirst(int val)
{
    Node after = first.next;
    Node node = Node(val, first, after);
    first.next = node;
    after.prev = node;
    size++;
}

void LinkedList::addLast(int val)
{
    Node before = last.prev;
    Node node = Node(val, before, last);
    before.next = node;
    last.prev = node;
    size++;
}

//TODO
int LinkedList::removeFirst()
{
    if (size == 0)
    {
        return NULL;
    }
    return 0;
}

//TODO
int LinkedList::removeLast()
{
    if (size == 0)
    {
        return NULL;
    }
    return 0;
}

int main()
{
    list = LinkedList();
    return 0;
}
