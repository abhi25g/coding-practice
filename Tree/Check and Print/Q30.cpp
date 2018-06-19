#include<iostream>
#include<bt.h>
#include<vector>
using namespace std;
void printpath(node *root)
{
	if(!root)
		return;
	static vector<int> arr;
	arr.push_back(root->data);
	if(!root->left && !root->right)
	{
		for(int  i = 0; i < arr.size();i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		arr.pop_back();
		return;
	}
	printpath(root->left);
	printpath(root->right);
	arr.pop_back();
}
int main()
{
	tree t1;
	t1.input();
	cout<<"\n";
	printpath(t1.root);
}
