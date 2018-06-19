#include<iostream>
#include<bt.h>
using namespace std;
void bftl(node *r)
{
	if(!r)
		return;
	node *n;
	queue q1;
	q1.push(r);
	q1.push(NULL);
	cout<<"\n";
	while(!q1.isempty())
	{
		n = q1.pop();
		if(n == NULL)
		{
			if(!q1.isempty())
				q1.push(NULL);
			cout<<"\n";
		}
		else
		{
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
	}
}
int main()
{
	tree t1;
	t1.input();
	bftl(t1.root);
}
