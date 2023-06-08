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
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
//     void buildtree(node *root)
//     {
//         // enter dta for root node
//         cin >> data;
//         root->data = data;
//         // enter data for right tree
//         root->left = buildtree(root->left);
//         // enter data for right subtree
//         root->right = buildtree(root->right);
//         return root;
//     }
//     void levelordertraversal(node *root)
//     {
//         queue<int> q;
//         q.push(root);
//         while (!q.empty())
//         {
//             cout << root->data;
//             if (root->left)
//             {
//                 q.push(root->left);
//             }
//             if (root->right)
//             {
//                 q.push(root->right);
//             }
//         }
//     }
//     int heightoftree(node *root)
//     {
//         if (root == NULL)
//         {
//             return 0;
//         }
//         int left = heightoftree(root->left);
//         int right = heightoftree(root->right);
//         int height = max(left, right) + 1;
//         return height;
//     }
//     vector<int> leftview(node *root, int level, vector<int> ans)
//     {
//         if (root == NULL)
//         {
//             return 0;
//         }
//         if (level == ans.size())
//         {
//             ans.push_back(root->data);
//         }

//         int left = leftview(root->left, level + 1, ans);
//         int right = leftview(root->right, level + 1, ans);
//     }
// }