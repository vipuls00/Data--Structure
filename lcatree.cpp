// #include <iostream>
// using namespace std;
// Node* lca(Node* root,int n1, int n2){
//     if (root == NULL)
//     {
//     return NULL;
//     }
//      if (root->data == n1 && root->data ==n2)
//     {
//         return root;
//     }
//     Node* leftsubtree = lca(root->left,n1,n2);
//     Node* rightsubtree = lca(root->right);

   
//     if (leftsubtree == n2 && rightsubtree == n1)
//     {
//         return root;
//     }
//     if (leftsubtree != NULL && rightsubtree== NULL )
//     {
//         return leftsubtree;
//     }
//     if (leftsubtree == NULL && rightsubtree != NULL )
//     {
//         return rightsubtree;
//     }
    
// }
// int main (){
//     return 0;
// }