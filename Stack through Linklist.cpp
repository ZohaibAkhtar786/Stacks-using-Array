#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void push() {
    int value;
    cout<<"Enter the value to be pushed: ";
    cin>>value;

    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;

    cout<<"\nElement "<<value<<" has been pushed to the stack.\n\n";
}

void pop() {
    if(top == NULL) {
        cout<<"\nStack is empty.\n\n";
        return;
    }

    Node* temp = top;
    top = top->next;
    int value = temp->data;
    delete(temp);

    cout<<"\nElement "<<value<<" has been popped from the stack.\n\n";
}

void display() {
    if(top == NULL) {
        cout<<"\nStack is empty.\n\n";
        return;
    }

    Node* temp = top;
    cout<<"\nStack elements are: ";
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n\n";
}

bool isEmpty() {
    return top == NULL;
}

bool isFull() {
    Node* temp = new Node();
    bool result = temp == NULL;
    delete temp;
    return result;
}

void showEvenNumbers() {
    if(top == NULL) {
        cout<<"\nStack is empty.\n\n";
        return;
    }

    Node* temp = top;
    cout<<"\nEven elements in the stack are: ";
    while(temp != NULL) {
        if(temp->data % 2 == 0) {
            cout<<temp->data<<" ";
        }
        temp = temp->next;
    }
    cout<<"\n\n";
}

int main() {
    int choice;
    do {
        cout<<"Select an option:\n";
        cout<<"1. Push element to stack\n";
        cout<<"2. Pop element from stack\n";
        cout<<"3. Display stack elements\n";
        cout<<"4. Check if stack is empty\n";
        cout<<"5. Check if stack is full\n";
        cout<<"6. Show even elements in the stack\n";
        cout<<"7. Exit\n";
        cin>>choice;

        switch(choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                if(isEmpty()) {
                    cout<<"\nStack is empty.\n\n";
                } else {
                    cout<<"\nStack is not empty.\n\n";
                }
                break;
            case 5:
                if(isFull()) {
                    cout<<"\nStack is full.\n\n";
                } else {
                    cout<<"\nStack is not full.\n\n";
                }
                break;
            case 6:
                showEvenNumbers();
                break;
            case 7:
                cout<<"\nExiting the program.\n\n";
                break;
            default:
                cout<<"\nInvalid choice. Please select a valid option.\n\n";
        }
    } while(choice != 7);

    return 0;
}

