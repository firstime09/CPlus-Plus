#include <iostream>
using namespace std;

struct node{ int data; node *prev; node *next; };

void reverse(node** head_ref)
{
    node* temp = NULL;
    node* current = *head_ref;

    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL)
        *head_ref = temp->prev;
}

int main(){

    node *head = NULL;
    node *end = NULL;

    node* first_node = new node();
    first_node->data = 5;
    first_node->prev = NULL;

    head = first_node;
    node* second_node = new node();
    second_node->data = 4;
    second_node->prev = first_node;
    second_node->next = NULL;

    first_node->next = second_node;

    reverse(&head);
    cout << "In forward direction:" <<endl;

    while(head != NULL){
        end = head;
        cout<<head->data<<" ";
        head = head->next;
    }

    cout<<endl;
    cout << "In backward direction:" <<endl;

    while(end != NULL){
        cout<<end->data<<" ";
        end = end->prev;
    }

    return 0;
}

# Latihan 2 - Next Code
#include <iostream>
using namespace std;

struct Node { int data; Node* prev; Node* next; };

Node* head = NULL; Node* tail = NULL;

void addNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode; } }

void printForward() {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " "; current = current->next;
    }
    cout << endl; }

void printReverse() {
    Node* current = tail;
    while (current != NULL) {
        cout << current->data << " "; current = current->prev;
    }
    cout << endl; }

int main(){ addNode(1); addNode(2); addNode(3); addNode(4); addNode(5);
    cout << "Doubly linked list in forward order: "; printForward();
    cout << "Doubly linked list in reverse order: "; printReverse();
    return 0; }
