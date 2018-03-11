#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};
node *enter(int num1){
    node *newnode = new node;
    newnode->data = num1;
    newnode->left = NULL;
    newnode->right = NULL;
}
void reverseOrder(node *root){
    node *temp;
    queue <node *> q1,q2;
    stack <node *> s;
    q1.push(root);
    while(!q1.empty()){
       temp=q1.front();
       q1.pop();
       s.push(temp);
       if(root->left)
              q1.push(root->left);
       
       if(root->right)
              q1.push(root->right);
     }
 
      while(!s.empty()){
      cout<<root->data<<" ";
      s.pop();
      } 
}


int main()
{
    node *root = enter(8);
    root->left = enter(10);
    root->right = enter(3);
    root->left->left = enter(4);
    root->left->right = enter(5);
    root->right->right = enter(6);
    reverseOrder(root);
    return 0;
}
