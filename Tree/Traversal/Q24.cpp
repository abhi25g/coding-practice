#include<iostream>
#include<bt.h>
using namespace std;
void width(node *root, int *min, int curr)
{
	if(!root)
		return;
	if(curr < *min)
		*min = curr;
	width(root->left, min, curr-1);
	width(root->right, min, curr);
}
void diagonal(node *root, int i, int curr)
{
	if(!root)
		return;
	if(i == curr)
		cout<<root->data<<" ";
	diagonal(root->left, i, curr-1);
	diagonal(root->right, i, curr);
}
int main()
{
	tree t1;
	int k;
	t1.input();
	int min = 0, f;
	width(t1.root, &min, 0);
	cout<<"\n";
	for(int i = min; i <= 0; i++)
	{
		diagonal(t1.root,i,0);
		cout<<"\n";
	}
}
