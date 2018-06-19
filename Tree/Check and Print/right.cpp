#include<iostream>
#include<bt.h>
using namespace std;
void rightview(node *root, int l, int*max)
{
	if(!root)
		return;
	if(l > *max)
	{
		cout<<root->data<<" ";
		*max = l;
	}
	rightview(root->right, l+1, max);
	rightview(root->left, l+1, max);
}
int main()
{
	tree t1;
	int k;
	t1.input();
	int max = 0;
	cout<<"\nThe right view is ";
	rightview(t1.root,1,&max);
}
