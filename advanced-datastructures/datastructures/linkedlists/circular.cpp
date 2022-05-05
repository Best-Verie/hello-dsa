#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

class CircularLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    CircularLinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void add_node(int n)
    {
        Node *temp = new Node;
        temp->data = n;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
            tail->next = head;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            tail->next = head;
        }
    }

    void get_list()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
            if (temp == head)
            {
                break;
            }
        }
        cout << endl;
    }
};

int main()
{
    CircularLinkedList list;
    list.add_node(1);
    list.add_node(2);
    list.add_node(3);

    list.get_list();
    return 0;
}
