#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
}

class SLinkedList
{
private:
    Node *head;
    Node *tail;
    int size;

public:
    SLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    // void insertAtHead(int data){
    //     Node *newNode = new Node();
    //     newNode->data = data;
    //     newNode->next = head;
    //     head = newNode;
    // }

    void insertAtTail(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void getList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void deleteNode(int data)
    {
        Node *temp = head;
        Node *prev = NULL;
        while (temp != NULL)
        {
            if (temp->data == data)
            {
                if (prev == NULL)
                {
                    head = temp->next;
                    delete temp;
                    temp = head;
                }
                else
                {
                    prev->next = temp->next;
                    delete temp;
                    temp = prev->next;
                }
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }
    }
}