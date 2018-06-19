#include<iostream>
#include<bt.h>
using namespace std;
void bftlq(node *r)
{
	if(!r)
		return;
	node *n;
	queue q1,q2;
	q1.push(r);
	cout<<"\n";
	while(!q1.isempty() || !q2.isempty())
	{
		while(!q1.isempty())
		{
			n = q1.pop();
			cout<<n->data<<" ";
			if(n->left != NULL)
			{
				q2.push(n->left);
			}
			if(n->right != NULL)
			{
				q2.push(n->right);
			}
		}
		cout<<"\n";
		while(!q2.isempty())
		{
			n = q2.pop();
			cout<<n->data<<" ";
			if(n->left != NULL)
			{
				q1.push(n->left);
			}
			if(n->right != NULL)
			{
				q1.push(n->right);
			}
		}
		cout<<"\n";
	}
}
int main()
{
	tree t1;
	t1.input();
	bftlq(t1.root);
}
