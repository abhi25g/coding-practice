#include<iostream>
#include<conio.h>
#include<bt.h>
using namespace std;
int main()
{
	tree t1;
	int *arr, size, i;
	node *ptr;
	t1.root = new node(5);
    t1.root->left    = new node(3);
    t1.root->right   = new node(8);
    t1.root->left->left = new node(2);
    t1.root->left->right = new node(4);
    t1.root->left->left->left = new node(1);
    t1.root->right->left = new node(6);
    t1.root->right->left->right = new node(7);
	cout<<"\nEnter the length of the path ";
	cin>>size;
	arr = new int[size];
	cout<<"\nEnter the sequence of nodes ";
	for(i = 0;i < size;i++)
		cin>>arr[i];
	i = 0;
	ptr = t1.search(arr[i]);
	i++;
	while(ptr && i<size)
	{
		if(ptr->left && ptr->left->data == arr[i])
		{
			ptr = ptr->left;
			i++;
		}
		else if(ptr->right && ptr->right->data == arr[i])
		{
			ptr = ptr->right;
			i++;
		}
		else
		{
			cout<<"\nPath not found";
			getch();
			return 0;
		}
	}
	cout<<"\nPath found";
}
