#include<iostream>
#include<bt.h>
using namespace std;
int main()
{
	tree t1;
	t1.input();
	node *n;
	queue q1;
	int i = 0, s;
	q1.push(t1.root);
	cout<<"\nThe left view of the tree is ";
	while(!q1.isempty())
	{
		s = q1.size();
		for(i = 0; i<s;i++)
		{
			n = q1.pop();
			if(i == 0)
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
		i = 0;
	}
}
