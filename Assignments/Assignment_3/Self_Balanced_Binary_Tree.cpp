#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    int height;
    int size; // Size of the subtree rooted at this node

    Node(int data) {
        this->data = data;
        left = right = NULL;
        height = 1;
        size = 1;
    }
};

class BBST {
public:
    Node* root;

    BBST() {
        root = NULL;
    }

    void inorder(Node* root) {
        if (!root) return;
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    void preorder(Node* root) {
        if (!root) return;
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(Node* root) {
        if (!root) return;
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }

    int height(Node* root) {
        if (!root) return 0;
        return root->height;
    }

    int size(Node* root) {
        if (!root) return 0;
        return root->size;
    }

    int balancefactor(Node* root) {
        if (!root) return 0;
        return height(root->left) - height(root->right);
    }

    Node* rightrotate(Node* root) {
        Node* l = root->left;
        Node* lr = l->right;

        l->right = root;
        root->left = lr;

        root->height = max(height(root->left), height(root->right)) + 1;
        l->height = max(height(l->left), height(l->right)) + 1;

        root->size = size(root->left) + size(root->right) + 1;
        l->size = size(l->left) + size(l->right) + 1;

        return x;
    }

    Node* leftrotate(Node* root) {
        Node* r = root->right;
        Node* rl = r->left;

        r->left = root;
        root->right = rl;

        root->height = max(height(root->left), height(root->right)) + 1;
        r->height = max(height(r->left), height(r->right)) + 1;

        root->size = size(root->left) + size(root->right) + 1;
        r->size = size(r->left) + size(r->right) + 1;

        return r;
    }

    Node* insert(Node* root, int data) {
        if (!root) {
            return new Node(data);
        }

        if (data < root->data) {
            root->left = insert(root->left, data);
        } else if (data > root->data) {
            root->right = insert(root->right, data);
        } else {
            return root;
        }

        root->height = 1 + max(height(root->left), height(root->right));
        root->size = 1 + size(root->left) + size(root->right);

        int balance = balancefactor(root);

        if (balance > 1 && data < root->left->data) {
            return rightrotate(root);
        }
        if (balance < -1 && data > root->right->data) {
            return leftrotate(root);
        }
        if (balance > 1 && data > root->left->data) {
            root->left = leftrotate(root->left);
            return rightrotate(root);
        }
        if (balance < -1 && data < root->right->data) {
            root->right = rightrotate(root->right);
            return leftrotate(root);
        }

        return root;
    }

    bool find(Node* root, int data) {
        if (!root) return false;
        if (root->data == data) return true;
        if (data < root->data) return find(root->left, data);
        return find(root->right, data);
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current->left != NULL) {
            current = current->left;
        }
        return current;
    }

    Node* remove(Node* root, int data) {
        if (!root) return root;

        if (data < root->data) {
            root->left = remove(root->left, data);
        } else if (data > root->data) {
            root->right = remove(root->right, data);
        } else {
            if ((root->left == NULL) || (root->right == NULL)) {
                Node* temp = root->left ? root->left : root->right;
                if (!temp) {
                    temp = root;
                    root = NULL;
                } else {
                    *root = *temp;
                }
                delete temp;
            } else {
                Node* temp = minValueNode(root->right);
                root->data = temp->data;
                root->right = remove(root->right, temp->data);
            }
        }

        if (!root) return root;

        root->height = 1 + max(height(root->left), height(root->right));
        root->size = 1 + size(root->left) + size(root->right);

        int balance = balancefactor(root);

        if (balance > 1 && balancefactor(root->left) >= 0) {
            return rightrotate(root);
        }
        if (balance > 1 && balancefactor(root->left) < 0) {
            root->left = leftrotate(root->left);
            return rightrotate(root);
        }
        if (balance < -1 && balancefactor(root->right) <= 0) {
            return leftrotate(root);
        }
        if (balance < -1 && balancefactor(root->right) > 0) {
            root->right = rightrotate(root->right);
            return leftrotate(root);
        }

        return root;
    }

    int order_of_key(Node* root, int key) {
        if (!root) return 0;
        if (key < root->data) {
            return order_of_key(root->left, key);
        } else if (key > root->data) {
            return 1 + size(root->left) + order_of_key(root->right, key);
        } else {
            return size(root->left);
        }
    }

    Node* get_by_order(Node* root, int k) {
        if (!root) return NULL;
        int left_size = size(root->left);
        if (k < left_size) {
            return get_by_order(root->left, k);
        } else if (k > left_size) {
            return get_by_order(root->right, k - left_size - 1);
        } else {
            return root;
        }
    }

};

