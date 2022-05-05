#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void add_node(int n)
    {
        Node *temp = new Node;
        temp->data = n;
        temp->next = NULL;
        temp->prev = NULL;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            Node *temp2 = head;
            while (temp2->next != NULL)
            {
                temp2 = temp2->next;
            }
            temp2->next = temp;
            temp->prev = temp2;
        }
    }
    void print_list()
    {
        Node *temp = head;
        if (temp != NULL)
        {
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
        else
        {
            cout << "This linkedlist is empty";
        }
    }
};

int main()
{
    LinkedList list;
    list.add_node(1);
    list.add_node(2);
    list.add_node(8);
    list.add_node(9);

    list.print_list();

    return 0;
}
