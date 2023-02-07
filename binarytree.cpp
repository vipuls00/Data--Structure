#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildtree(node *root)
{
    int data;
    cout << " Enter data :" << endl;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for the left";
    root->left = buildtree(root->left);
    cout << " enter data for the right";
    root->right = buildtree(root->right);
    return root;
}
void levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        cout << temp->data << " ";
        q.pop();
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}
void inordertraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inordertraversal(root->left);
    cout << root->data << " ";
    inordertraversal(root->right);
}
void preordertraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preordertraversal(root->left);

    preordertraversal(root->right);
}
void postordertraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postordertraversal(root->left);

    postordertraversal(root->right);
    cout << root->data << " ";
}
int main()
{
    node *root = NULL;
    root = buildtree(root);
    cout << " printing level order traversal" << endl;
    levelordertraversal(root);
    cout << " printing inorder traversal" << endl;
    inordertraversal(root);
    cout << " printing preorder traversal" << endl;
    preordertraversal(root);
    cout << " printing postorder traversal" << endl;
    postordertraversal(root);
    return 0;
}
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1