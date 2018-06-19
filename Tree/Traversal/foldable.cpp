#include<iostream>
#include<bt.h>
using namespace std;
bool isfold(node *l, node *r)
{
	if(!l && !r)
		return true;
	if(!l || !r)
		return false;
	return (isfold(l->left, r->right) && isfold(l->right, r->left));
}
bool fold(node *root)
{
	if(!root)
		return true;
	return isfold(root->left, root->right);
}
int main()
{
	tree t1;
	node *n1;
	t1.root = new  node(10);
	t1.root->left = new  node(7);
	t1.root->right = new  node(15);
	n1 = t1.root->left;
	n1->right = new node(9);
	n1 = t1.root->right;
	n1->left = new node(11);
	if(fold(t1.root))
		cout<<"\nThe tree is foldable";
	else
		cout<<"\nThe tree is not foldable";
}
