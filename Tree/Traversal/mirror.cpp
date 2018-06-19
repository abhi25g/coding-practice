#include<iostream>
#include<bt.h>
using namespace std;
void mirror(node *root)
{
	if(!root)
		return;
	mirror(root->left);
	mirror(root->right);
	node *temp = root->right;
	root->right = root->left;
	root->left = temp;
}
int main()
{
	tree t1;
	node *n1;
	t1.root = new  node(10);
	t1.root->left = new  node(7);
	t1.root->right = new  node(11);
	n1 = t1.root->left;
	n1->right = new node(9);
	n1 = t1.root->right;
	n1->left = new node(5);
	bft(t1.root);
	mirror(t1.root);
	cout<<"\n";
	bft(t1.root);
}
