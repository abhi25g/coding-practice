#include<iostream>
#include<bt.h>
using namespace std;
void leftview(node *root, int l, int*max)
{
	if(!root)
		return;
	if(l > *max)
	{
		cout<<root->data<<" ";
		*max = l;
	}
	leftview(root->left, l+1, max);
	leftview(root->right, l+1, max);
}
int main()
{
	tree t1;
	int k;
	t1.input();
	int max = 0;
	cout<<"\nThe left view is ";
	leftview(t1.root,1,&max);
}
