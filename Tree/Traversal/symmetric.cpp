#include<iostream>
#include<bt.h>
using namespace std;
bool issym(node *l, node *r)
{
	if(!l && !r)
		return true;
	if(!l || !r)
		return false;
	if(l->data != r->data)
		return false;
	return (issym(l->left, r->right) && issym(l->right, r->left));
}
bool sym(node *root)
{
	if(!root)
		return true;
	return issym(root->left, root->right);
}
int main()
{
	tree t1;
	node *n1;
	t1.root = new  node(10);
	t1.root->left = new  node(7);
	t1.root->right = new  node(7);
	n1 = t1.root->left;
	n1->right = new node(9);
	n1 = t1.root->right;
	n1->left = new node(9);
	if(sym(t1.root))
		cout<<"\nThe tree is symmetric";
	else
		cout<<"\nThe tree is not symmetric";
}
