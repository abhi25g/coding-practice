#include<iostream>
#include<bt.h>
using namespace std;
void prntmid(node *a, node* b)
{
	if(!a || !b)
		return;
	if(!b->left)
		cout<<a->data<<" ";
	else
	{
		prntmid(a->left,b->left->left);
		prntmid(a->right,b->left->left);
	}
}
int main()
{
	tree t1;
	t1.input();
	cout<<"\n";
	prntmid(t1.root, t1.root);
}
