#include <iostream>

using namespace std;

// TODO: Implement the functions below
//  [ ] Delete element from a linkedlist
//  [ ] Update element in a linkedlist
//  [ ] Insert element in a linkedlist
//  [ ] Concatinating two linked lists
//  [ ] Reverse a linkedlist
//  [ ] Find the length of a linkedlist
//  [x] Sort a linked list
//  [x] Search a linked list

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;
    Node *tail;

public:
    LinkedList()
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
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }


    void get_list()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    bool search(int n)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == n)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    void sort()
    {
        Node *temp = head;
        Node *temp2 = head;
        Node *temp3 = head;
        int temp_data;
        while (temp != NULL)
        {
            temp2 = temp;
            while (temp2 != NULL)
            {
                if (temp->data > temp2->data)
                {
                    temp_data = temp->data;
                    temp->data = temp2->data;
                    temp2->data = temp_data;
                }
                temp2 = temp2->next;
            }
            temp = temp->next;
        }
    }
    void delete_node(int n)
    {
        Node *temp = head;
        Node *temp2 = head;
        if (temp->data == n)
        {
            head = temp->next;
            delete temp;
            return;
        }
        while (temp != NULL)
        {
            if (temp->data == n)
            {
                temp2->next = temp->next;
                delete temp;
                return;
            }
            temp2 = temp;
            temp = temp->next;
        }
    }
};

int main()
{
    LinkedList list;
    list.add_node(2);
    list.add_node(1);
    list.add_node(3);

    list.get_list();

    cout << "Does 2 exists in a linked list: " << list.search(2) << endl;
    cout << "Does 100 exists in a linked list: " << list.search(100) << endl;

    list.sort();

    // list.get_list();

    // list.delete_node(2);

    list.get_list();

    return 0;
}
