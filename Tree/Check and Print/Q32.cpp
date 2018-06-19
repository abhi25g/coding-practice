#include<iostream>
#include<bt.h>
using namespace std;
void nosibling(node *root)
{
	if(!root)
		return;
	if(root->left && !root->right)
		cout<<root->left->data<<" ";
	if(!root->left && root->right)
		cout<<root->right->data<<" ";
	nosibling(root->left);
	nosibling(root->right);
}
int main()
{
	tree t1;
	t1.root = new node(1);
    t1.root->left = new node(2);
    t1.root->right = new node(3);
    t1.root->left->right = new node(4);
    t1.root->right->left = new node(5);
    t1.root->right->left->left = new node(6);
	nosibling(t1.root);
}
