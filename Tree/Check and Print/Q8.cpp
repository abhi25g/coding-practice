#include<iostream>
#include<bt.h>
using namespace std;
bool fullbin(node *root)
{
	if(!root)
		return true;
	if((!root->left && root->right) || (!root->right && root->left))
		return false;
	return fullbin(root->left) && fullbin(root->right);
}
int main()
{
	tree t1;
	t1.input();
	if(fullbin(t1.root))
		cout<<"\nThe tree is full binary";
	else
		cout<<"\nThe tree is not full binary";
}
