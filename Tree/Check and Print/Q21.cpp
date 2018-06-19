#include<iostream>
#include<vector>
#include<bt.h>
using namespace std;
bool path(node *root, int x, vector<int>& arr)
{
	if(!root)
		return false;
	arr.push_back(root->data);
	if(root->data == x)
		return true;
	if(path(root->left,x,arr) || path(root->right,x,arr))
		return true;
	arr.pop_back();
	return false;
}
int main()
{
	tree t1;
	int x, i;
	vector<int> arr;
	t1.input();
	cout<<"\nEnter the number ";
	cin>>x;
	if(path(t1.root, x, arr))
	{
		for (i=0; i<arr.size()-1; i++)    
            cout << arr[i] << "->";
        cout << arr[arr.size() - 1];
	}
	else
		cout<<"\nNo path";
}
