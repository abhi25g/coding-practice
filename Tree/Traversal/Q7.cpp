#include<iostream>
#include<btin.h>
using namespace std;
void insucc(node *root)
{
	if(!root)
		return;
	static node *s = NULL;
	insucc(root->right);
	
	root->next = s;
	s = root;
	
	insucc(root->left);
}
int main()
{
	tree t1;
	t1.input();
	insucc(t1.root);
	node *ptr = t1.root;
	while(ptr->left)
		ptr = ptr->left;
	cout<<"\n";
	while(ptr)
	{
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
}
