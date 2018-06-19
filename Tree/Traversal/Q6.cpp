#include<iostream>
#include<bt.h>
using namespace std;
int size(node *n)
{
	if(!n)
		return 0;
	if(!n->left && !n->right)
		return 1;
	return (size(n->left)+size(n->right)+1);
}
void inorder(node *root, int *arr)
{
	if(!root)
		return;
	static int c = 1;
	inorder(root->left, arr);
	arr[c] = root->data;
	c++;
	inorder(root->right, arr);
}
void replace(node *root, int *arr)
{
	if(!root)
		return;
	static int c = 1;
	replace(root->left, arr);
	root->data = arr[c-1] + arr[c+1];
	c++;
	replace(root->right, arr);
}
int main()
{
	tree t1;
	t1.input();
	int *arr, s, i;
	s = size(t1.root);
	s += 2;
	arr = new int[s];
	arr[0] = arr[s-1] = 0;
	inorder(t1.root, arr);
	replace(t1.root, arr);
	cout<<"\n";
	bft(t1.root);
}

