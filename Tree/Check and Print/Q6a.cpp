#include<iostream>
#include<bt.h>
using namespace std;
bool sumTree(node *root)
{
	if(!root || (!root->left && !root->right))
		return true;
	int ls,rs;
	if(!root->left)
	{
		ls = 0;
	}
	else if(!root->left->left && !root->left->right)
	{
		ls = root->left->data;
	}
	else
	{
		ls = 2*root->left->data;
	}
	if(!root->right)
	{
		rs = 0;
	}
	else if(!root->right->left && !root->right->right)
	{
		rs = root->right->data;
	}
	else
	{
		rs = 2*root->right->data;
	}
	return ((root->data == ls+rs) && sumTree(root->left) && sumTree(root->right));
}
int main()
{
	tree t1;
	t1.input();
	int leafLvl = 0;
	if(sumTree(t1.root))
		cout<<"\nYes";
	else
		cout<<"\nNo";
}
