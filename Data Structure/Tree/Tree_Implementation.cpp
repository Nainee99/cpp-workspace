#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
};

// create  tree function
node *CreateTree()
{
    int x;
    node *new_node = new node;
    cout << "Enter the value: " << endl;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    else
    {
        new_node->data = x;
        cout << "Enter the left child: " << x << endl;
        new_node->left = CreateTree();
        cout << "Enter the right child: " << x << endl;
        new_node->right = CreateTree();
    }
}

// Preoder Traversal
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        cout << root->data << "  ";
        preorder(root->left);
        preorder(root->right);
    }
}

// PostOrder Traversal
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << "  ";
    }
}

void Inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        Inorder(root->left);
        cout << root->data << "  ";
        Inorder(root->right);
    }
}

int main()
{
    node *root;
    root = CreateTree();

    cout << " The preorder Traversal is :";
    preorder(root);
    cout << endl;
    cout << " The postorder Traversal is :";
    postorder(root);
    cout << endl;

    cout << " The Inorder Traversal is :";
    Inorder(root);
    cout << endl;

    return 0;
}