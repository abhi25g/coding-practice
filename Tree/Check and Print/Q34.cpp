#include<iostream>
#include<bt.h>
using namespace std;
void prntlvl(node *root, int lvl)
{
	if(!root)
		return;
	cout<<root->data<<" "<<lvl<<"\n";
	prntlvl(root->left,lvl+1);
	prntlvl(root->right,lvl+1);
}
int main()
{
	tree t1;
	t1.input();
	cout<<"\n";
	prntlvl(t1.root, 1);
}
