//
// Created by verie on 5/4/2022.
//

#include <cstdlib>
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class SinglyLinkedList {

private:
    Node *head;
    Node *tail;

public:
    SinglyLinkedList(){
        head = NULL;
        tail = NULL;
    }

    void insertAtTail(int data){
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insertAtHead(int data){
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

    void display(){
        Node *temp = head;
        while (temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    bool search(int key){
        Node *temp = head;
        while (temp !=NULL){
            if(temp->data == key){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }


};

int main() {
    std::cout << "Hello, World!" << std::endl;
    SinglyLinkedList singlyLinkedList;
    singlyLinkedList.insertAtTail(45);
    singlyLinkedList.insertAtTail(56);
    singlyLinkedList.insertAtTail(49);
    singlyLinkedList.insertAtTail(52);
    singlyLinkedList.insertAtHead(2);


    singlyLinkedList.display();

    if(singlyLinkedList.search(9)){
        cout<<"key Found"<<endl;
    }else{
        cout<<"key not found!"<<endl;
    }
    singlyLinkedList.display();
    return 0;
}

