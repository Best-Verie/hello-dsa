//
// Created by verie on 5/5/2022.
//

#include <iostream>
using namespace std;
int queue[100], n=100, front=-1,rear=-1;

//insert element at rear
void enqueue(int data){
    if(rear == n-1){
        cout<<"Queue overflow"<<endl;
    }
    else{
        if(front == -1){
            front = 0;
        }

        rear++;
        queue[rear] = data;
    }
}

void display(){
    if(front ==-1){
        cout<<"Queue is empty!"<<endl;
    }
    else{
        cout<<"Queue elements are: ";
        for(int i=front; i<=rear; i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}

//remove element form the front
void dequeue(){
    if(front == -1 || front>rear){
        cout<<"Queue underflow!";
        return;
    }
    cout<<"Elements deleted from queue is: "<<queue[front]<<endl;
    front++;
}

void readFront(){
    if(front == -1)
        cout<<"Queue is empty!"<<endl;
    cout<<"Element at front is: "<<queue[front]<<endl;
}
int main(){

    int choice;
    cout<<"1) Insert element to queue"<<endl;
    cout<<"2) Delete element from queue"<<endl;
    cout<<"3) Display all the elements of queue"<<endl;
    cout<<"4) Read element from the queue"<<endl;
    cout<<"5) Exit"<<endl;

    do{
        cout<<"Enter you choise"<<endl;
        cin>>choice;

        switch (choice) {
            case 1:
                int data;
                cout<<"Enter the element to enqueue: "<<endl;
                cin>>data;
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                readFront();
                break;
            case 5:
                exit(1);
            default:
                cout<<"Invalid operation"<<endl;
                break;
        }
    } while (choice>0 && choice<=5);
    return 0;
}