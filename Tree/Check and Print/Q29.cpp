#include<iostream>
#include<bt.h>
using namespace std;
void printLeaves(node *root)
{
	if(!root)
		return;
	if(!root->left && !root->right)
		cout<<root->data<<" ";
	printLeaves(root->left);
	printLeaves(root->right);
}
int main()
{
	tree t1;
	t1.input();
	cout<<"\n";
	printLeaves(t1.root);
}
