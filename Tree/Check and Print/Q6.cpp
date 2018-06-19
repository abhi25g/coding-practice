#include<iostream>
#include<bt.h>
using namespace std;
int sum(node *root)
{
	if(!root)
		return 0;
	if(!root->left && !root->right)
		return root->data;
	return (sum(root->left) + sum(root->right) + root->data);
}
bool sumTree(node *root)
{
	if(!root || !root->left && !root->right)
		return true;
	int ls,rs;
	ls = sum(root->left);
	rs = sum(root->right);
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
