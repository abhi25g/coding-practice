#include<iostream>
#include<bt.h>
using namespace std;
int sum(node *root)
{
	if(!root)
		return 0;
	return (sum(root->left) + root->data + sum(root->right));
}
int main()
{
	tree t1;
	
	t1.root = new node(8);
    t1.root->left = new node(3);
 
    t1.root->left->left = new node(1);
    t1.root->left->right = new node(40);
    t1.root->left->right->left = new node(4);
    t1.root->left->right->right = new node(5);
 
    t1.root->right = new node(10);
    t1.root->right->right = new node(14);
    t1.root->right->right->left = new node(13);
	
	int s, l = 0, r = 0;
	node *n;
	n = t1.root;
	while(n)
	{
		l += n->data;
		if(n->left)
			n = n->left;
		else
			n = n->right;
	}
	n = t1.root;
	while(n)
	{
		r += n->data;
		if(n->right)
			n = n->right;
		else
			n = n->left;
	}
	s = sum(t1.root);
	s = s - l - r + t1.root->data;
	if(s == l+r-t1.root->data)
		cout<<"\nSum of covered and uncovered nodes is same";
	else
		cout<<"\nSum of covered and uncovered nodes is not same";
}
