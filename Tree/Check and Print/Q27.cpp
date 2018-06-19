#include<iostream>
#include<bt.h>
using namespace std;
void printKDist(node *root, int k)
{
	if(!root)
		return;
	if(k == 0)
		cout<<root->data<<" ";
	printKDist(root->left, k-1);
	printKDist(root->right, k-1);
}
int main()
{
	tree t1;
	int k;
	t1.input();
	cout<<"\nEnter k ";
	cin>>k;
	cout<<"\n";
	printKDist(t1.root,k);
}
