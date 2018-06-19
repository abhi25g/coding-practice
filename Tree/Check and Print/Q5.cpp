#include<iostream>
#include<bt.h>
using namespace std;
bool sameLevel(node *root, int lvl, int *leafLvl)
{
	if(!root)
		return true;
	if(!root->left && !root->right)
	{
		if(*leafLvl == 0)
		{
			*leafLvl = lvl;
		}
		return lvl == *leafLvl;
	}
	sameLevel(root->left, lvl+1, leafLvl);
	sameLevel(root->right, lvl+1, leafLvl);
}
int main()
{
	tree t1;
	t1.input();
	int leafLvl = 0;
	if(sameLevel(t1.root, 0, &leafLvl))
		cout<<"\nYes";
	else
		cout<<"\nNo";
}
