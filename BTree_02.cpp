#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int data) {
    Node* node = new Node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
};

void preorder(Node* node){
        if (node == NULL) return;
        cout << node->data << " ";
        preorder(node->right);
        preorder(node->left);
        //cout << node->data << " ";
};

void postorder(Node* node){
        if (node == NULL) return;
        //cout << node->data << " ";
        postorder(node->right);
        postorder(node->left);
        cout << node->data << " ";
};

int main() {
    Node* root = newNode();
    root->left = newNode('2');
    root->right = newNode('3');
    root->left->left = newNode('5');
    root->left->right = newNode('6');
    //root->right->left = newNode('U');
    //root->left->left->right = newNode('D');
    //root->left->right->right = newNode('S');
    //root->left->right->left = newNode('I');

    cout << "Preorder Traversal: "; preorder(root);
    cout << "\nPostorder Traversal: "; postorder(root);
    cout << endl;

    return 0;
}
