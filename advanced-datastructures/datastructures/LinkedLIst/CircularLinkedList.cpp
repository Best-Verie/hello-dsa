//
// Created by verie on 5/5/2022.
//
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};


class CircularLinkedList{
private:
    Node *head;
    Node *tail;
public:
    CircularLinkedList(){
        head = NULL;
        tail = NULL;
    }

    void display(){
        Node *temp = head;
        if(temp!=NULL){
            while (temp!=NULL){
                cout<<temp->data<<" ";
                temp = temp->next;

                if(temp == head){
                    break;
                }
            }
            cout<<endl;
        } else{
            cout<<"Linked list is empty!"<<endl;
        }
    }

    void insertData(int data){
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
            tail = newNode;
            tail->next = head;
        } else{
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }
};

int main(){
    CircularLinkedList circularLinkedList;
    circularLinkedList.insertData(4);
    circularLinkedList.insertData(5);
    circularLinkedList.insertData(6);
    circularLinkedList.display();


}