#include<iostream>
#include<bt.h>
using namespace std;
class stack
{
	public:
		qnode *top;
		stack(node *t = NULL)
		{
			top = new qnode(t);
		}
		void push(node *n);
		node* pop();
		bool empty()
		{
			return top==NULL;
		}
};
void stack::push(node *n)
{
	if(!top)
		top = new qnode(n);
	else
		top = new qnode(n, top);
}
node* stack::pop()
{
	qnode* n = top;
	top = top->next;
	return n->nd;
}
int main()
{
	tree t1;
	t1.input();
	stack s1;
	node *t = t1.root;
	cout<<"\n";
	while(1)
	{
		while(t)
		{
			s1.push(t);
			t = t->left;
		}
		if(!s1.empty())
		{
			t = s1.pop();
			cout<<t->data<<" ";
			t = t->right;
		}
		else if(!t)
			break;
	}
}
