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
