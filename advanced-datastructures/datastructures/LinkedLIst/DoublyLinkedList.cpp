//
// Created by verie on 5/4/2022.
//

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
};
class DoublyLinkedList {
private:
    Node *head;
    Node *tail{};
public:
    DoublyLinkedList(){
        head = NULL;
    }

    void display(){
        Node *temp = head;
        if(temp != NULL){
            while (temp !=NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
        } else{
            cout<<"The linked list is empty!"<<endl;
        }
    }

    void insertAtTail(int data){
        Node *newNode= new Node();
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
        if(head == NULL){
//            cout<<"ssscccc"<<endl;
            head = newNode;
//            display();
        }else{
            Node *temp = head;
            while (temp->next !=NULL){
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
//        display();
    }

};

int main(){
    cout<<"Doubly linked list implementatio!"<<endl;
    DoublyLinkedList doublyLinkedList;
//    doublyLinkedList.display();
    doublyLinkedList.insertAtTail(9);
    doublyLinkedList.insertAtTail(6);
    doublyLinkedList.insertAtTail(26);
    doublyLinkedList.insertAtTail(78);
    doublyLinkedList.display();
}