#include <iostream>
#include <queue>

using namespace std;

struct Node
{
    int data;
    Node *left = nullptr;
    Node *right = nullptr;

    Node(int x)
    {
        data = x;
        left = right = nullptr;
    }
};

Node *insertEle(Node *root, int x)
{
    if (root == nullptr)
    {
        root = new Node(x);
        return root;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        if (curr->left != nullptr)
        {
            q.push(curr->left);
        }
        else
        {
            curr->left = new Node(x);
            return root;
        }

        if (curr->right != nullptr)
        {
            q.push(curr->right);
        }
        else
        {
            curr->right = new Node(x);
            return root;
        }
    }
    return root;
}

void inorder(Node *root)
{
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int sizeOfTree(Node *root)
{
    if (root == nullptr)
        return 0;

    return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}

int main()
{
    int n, x;
    cout << "Enter no. of elements : ";
    cin >> n;

    Node *root = nullptr;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element : ";
        cin >> x;

        root = insertEle(root, x);
    }

    cout << "Size of this tree : " << sizeOfTree(root) << endl;

    return 0;
}