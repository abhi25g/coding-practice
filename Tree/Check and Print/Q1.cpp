#include<iostream>
#include<bt.h>
using namespace std;
bool sum(node *root)
{
	if(!root || (!root->left &&!root->right))
		return true;
	int l = 0, r = 0;
	if(root->left)
		l = root->left->data;
	if(root->right)
		r = root->right->data;
	if(root->data != l+r)
		return false;
	return (sum(root->left) && sum(root->right));
}
int main()
{
	tree t1;
	t1.input();
	if(sum(t1.root))
		cout<<"\nChildren sum property satisfied";
	else
		cout<<"\nChildren sum property not satisfied";
}
