#include<iostream>
#include<math.h>
#include<bt.h>
using namespace std;
bool iscont(node *root)
{
	if(!root || (!root->right && !root->left))
		return true;
	if(root->left)
		if(abs(root->data-root->left->data)!=1)
			return false;
	if(root->right)
		if(abs(root->data-root->right->data)!=1)
			return false;
	return (iscont(root->left) && iscont(root->right));
}
int main()
{
	tree t1;
	node *n1;
	t1.root = new  node(3);
	t1.root->left = new  node(2);
	t1.root->right = new  node(4);
	n1 = t1.root->left;
	n1->left = new node(1);
	n1->right = new node(3);
	n1 = t1.root->right;
	n1->right = new node(9);
	if(iscont(t1.root))
		cout<<"\nThe tree is continuous";
	else
		cout<<"\nThe tree is not continuous";
}
