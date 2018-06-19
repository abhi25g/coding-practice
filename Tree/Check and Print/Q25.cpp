#include<iostream>
#include<bt.h>
using namespace std;
void full(node *root)
{
	if(!root)
		return;
	if(root->left && root->right)
		cout<<root->data<<" ";
	full(root->left);
	full(root->right);
}
int main()
{
	tree t1;
	t1.input();
	cout<<"\nThe full nodes are ";
	full(t1.root);
}
