#include<iostream>
#include<bt.h>
using namespace std;
void inorder(node *root, int n)
{
	static int count = 0;
	if(!root || count>n)
		return;
	inorder(root->left,n);
	count++;
	if(count == n)
		cout<<root->data;
	inorder(root->right,n);
}
int main()
{
	tree t1;
	int n;
	t1.input(); 
	cout<<"\nEnter n ";
	cin>>n;
	inorder(t1.root, n);
}
