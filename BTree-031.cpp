#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int v) : val(v), left(NULL), right(NULL) {}
};

Node* deleteNode(Node* root, int key) {
    if (root == NULL) {
        return NULL;
    }

    if (key < root->val) {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->val) {
        root->right = deleteNode(root->right, key);
    }
    else {
        if (root->left == NULL && root->right == NULL) {
            delete root;
            root = NULL;
        }
        else if (root->left == NULL) {
            Node* temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL) {
            Node* temp = root;
            root = root->left;
            delete temp;
        }
        else {
            Node* temp = root->right;
            while (temp->left != NULL) {
                temp = temp->left;
            }
            root->val = temp->val;
            root->right = deleteNode(root->right, temp->val);
        }
    }

    return root;
}

int main() {
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(8);

    cout << "Before deletion: ";
    cout << root->val << " " << root->left->val << " " << root->right->val << " ";
    cout << root->left->left->val << " " << root->left->right->val << " ";
    cout << root->right->left->val << " " << root->right->right->val << " ";

    root = deleteNode(root, 8);

    cout << "\nAfter deletion: ";
    cout << root->val << " " << root->left->val << " " << root->right->val << " ";
    cout << root->left->right->val << " ";
    cout << root->right->left->val << " " << root->right->right->val << endl;

    return 0;
}
