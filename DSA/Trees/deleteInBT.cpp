#include <iostream>
#include <queue>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = nullptr;
        right = nullptr;
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
    Node *curr;

    while (!q.empty())
    {
        curr = q.front();
        q.pop();

        if (curr->left)
        {
            q.push(curr->left);
        }
        else
        {
            curr->left = new Node(x);
            return root;
        }

        if (curr->right)
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

void deleteDeepest(Node *root, Node *dNode)
{
    queue<Node *> q;
    q.push(root);

    Node *curr;
    while (!q.empty())
    {
        curr = q.front();
        q.pop();

        if (curr == dNode)
        {
            curr = nullptr;
            delete (dNode);
            return;
        }

        if (curr->right)
        {
            if (curr->right == dNode)
            {
                curr->right = nullptr;
                delete (dNode);
                return;
            }
            q.push(curr->right);
        }

        if (curr->left)
        {
            if (curr->left == dNode)
            {
                curr->left = nullptr;
                delete (dNode);
                return;
            }
            q.push(curr->left);
        }
    }
}

Node *deletion(Node *root, int key)
{
    if (root == nullptr)
        return nullptr;

    if (root->left == nullptr && root->right == nullptr)
    {
        if (root->data == key)
        {
            return nullptr;
        }
        else
        {
            return root;
        }
    }

    queue<Node *> q;
    q.push(root);

    Node *curr;
    Node *keyNode = nullptr;

    while (!q.empty())
    {
        curr = q.front();
        q.pop();

        if (curr->data == key)
        {
            keyNode = curr;
        }

        if (curr->left)
        {
            q.push(curr->left);
        }

        if (curr->right)
        {
            q.push(curr->right);
        }
    }

    if (keyNode != nullptr)
    {
        int x = curr->data;

        keyNode->data = x;

        deleteDeepest(root, curr);
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

int main()
{
    int n, x;
    cout << "Enter number of elements : ";
    cin >> n;

    Node *root = nullptr;

    for (int i = 0; i < n; i++)
    {

        cout << "Enter element : ";
        cin >> x;

        root = insertEle(root, x);
    }

    inorder(root);
    cout << endl;

    int key = 11;

    cout << "After deleting : ";
    root = deletion(root, key);

    inorder(root);
    cout << endl;

    return 0;
}