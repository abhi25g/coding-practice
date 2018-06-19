#include<iostream>
#include<bt.h>
using namespace std;
void width(node *root, int *min, int *max, int curr)
{
	if(!root)
		return;
	if(curr > *max)
		*max = curr;
	else if(curr < *min)
		*min = curr;
	width(root->left, min, max, curr-1);
	width(root->right, min, max, curr+1);
}
void top(node *root, int i, int curr, int *f)
{
	if(!root || *f)
		return;
	if(i == curr)
	{
		cout<<root->data<<" ";
		*f = 1;
	}
	top(root->left, i, curr-1,f);
	top(root->right, i, curr+1,f);
}
int main()
{
	tree t1;
	int k;
	t1.input();
	int max = 0, min = 0, f;
	width(t1.root, &min, &max, 0);
	cout<<"\n";
	for(int i = min; i <= max; i++)
	{
		f = 0;
		top(t1.root,i,0,&f);
	}
}
