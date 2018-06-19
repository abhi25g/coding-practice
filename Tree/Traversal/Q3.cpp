#include<iostream>
#include<bt.h>
using namespace std;
node* pred(node* p)
{
	node *pr = p->left;
	while(pr && pr->right)
		pr = pr->right;
	return pr;
}
int main()
{
	tree t1;
	t1.input();
	node *curr = t1.root;
	node *pr;
	cout<<"\n";
	while(curr)
	{
		if(curr->left == NULL)
		{
			cout<<curr->data<<" ";
			curr = curr->right;
		}
		else
		{
			pr = curr->left;
			while(pr->right &&pr->right!=curr)
				pr = pr->right;
			if(pr->right == NULL)
			{
				pr->right = curr;
				curr = curr->left;
			}
			else if(pr->right == curr)
			{
				pr->right = NULL;
				cout<<curr->data<<" ";
				curr = curr->right;
			}
		}
	}
}
