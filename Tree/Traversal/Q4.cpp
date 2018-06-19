#include<iostream>
using namespace std;
int search(int *in, int x, int size)
{
	for(int i = 0; i < size ; i++)
		if(in[i] == x)
			return i;
	return -1;
}
void printpost(int *in, int *pre, int size)
{
	int root = search(in, pre[0], size);
	if(root != 0)
		printpost(in, pre+1, root);
	if(root != size-1)
		printpost(in+root+1, pre+root+1, size-root-1);
	cout<<pre[0]<<" ";
}
int main()
{
	int *pre, *in, size, i;
	cout<<"\nEnter the number of nodes ";
	cin>>size;
	in = new int[size];
	pre = new int[size];
	cout<<"\nEnter the inorder traversal ";
	for(i = 0; i < size; i++)
		cin>>in[i];
	cout<<"\nEnter the preorder traversal ";
	for(i = 0; i < size; i++)
		cin>>pre[i];
	cout<<"\nThe post order traversal is ";
	printpost(in, pre, size);
}
