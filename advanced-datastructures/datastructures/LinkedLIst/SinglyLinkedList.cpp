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

    void insertAfter(struct Node *prevNode, int data){
        if(prevNode == NULL){
            cout<<"Invalid  node pointer"<<endl;
        }

        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = prevNode->next;
        prevNode->next = newNode;
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

    void deleteFromHead(){
        if(head==nullptr){
            cout<<"Empty linked list!"<<endl;
        }
        Node* temp = head;
        head = head->next;
        delete temp;

    }

    void deleteFromEnd(){
        Node *ptr;
        if(head == NULL)
            cout<<"Empty list"<<endl;
        else if(head->next == NULL){
            head = NULL;
            delete head;
        }
        else{
            Node *temp = head;
            while (temp->next !=NULL){
                ptr = temp;
                temp = temp->next;
            }
            ptr->next = NULL;
            delete ptr;
            cout<<"Deleted node: "<<ptr->data<<endl;
        }

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

//    Node *head = NULL;
//    singlyLinkedList.insertAfter(head->next->next, 67);

    singlyLinkedList.display();

    if(singlyLinkedList.search(9)){
        cout<<"key Found"<<endl;
    }else{
        cout<<"key not found!"<<endl;
    }
    singlyLinkedList.display();

    singlyLinkedList.deleteFromHead();
    singlyLinkedList.display();

//    singlyLinkedList.deleteFromEnd();
//    singlyLinkedList.display();
    return 0;
}

