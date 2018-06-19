#include<iostream>
#include<bt.h>
using namespace std;
int main()
{
	tree t1;
	t1.input();
	node *n;
	queue q1;
	int i = 0, s, k;
	q1.push(t1.root);
	cout<<"\nEnter k ";
	cin>>k;
	while(!q1.isempty())
	{
		if(k == 0)
		{
			while(!q1.isempty())
			{
				cout<<q1.pop()->data<<" ";
			}
			break;
		}
		s = q1.size();
		for(i = 0; i<s;i++)
		{
			n = q1.pop();
			if(n->left != NULL)
			{
				q1.push(n->left);
			}
			if(n->right != NULL)
			{
				q1.push(n->right);
			}
		}
		k--;
	}
	if(q1.isempty())
		cout<<"\nk > number of levels";
}
