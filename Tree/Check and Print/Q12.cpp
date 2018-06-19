#include<iostream>
#include<bt.h>
using namespace std;
bool isIdentical(node *root1, node *root2)
{
	if(!root1 && !root2)
		return true;
	if(!root1 || !root2)
		return false;
	return(root1->data == root2->data && isIdentical(root1->left,root2->left) && isIdentical(root1->right,root2->right));
}
int main()
{
	tree t1, t2;
	node *n;
	t1.root = new node(26);
	t1.root->right              = new node(3);
    t1.root->right->right       = new node(3);
    t1.root->left               = new node(10);
    t1.root->left->left         = new node(4);
    t1.root->left->left->right  = new node(30);
    t1.root->left->right        = new node(6);
    
    t2.root    = new node(10);
    t2.root->right          = new node(6);
    t2.root->left           = new node(4);
    t2.root->left->right    = new node(30);
    
    n = t1.search(t2.root->data);
    if(isIdentical(n,t2.root))
    	cout<<"\nYes";
    else
    	cout<<"\nNo";
}
