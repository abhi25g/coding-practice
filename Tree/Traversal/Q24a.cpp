#include<iostream>
#include<bt.h>
#include<map>
#include<vector>
using namespace std;
void diagonal(node *root, int curr, map<int, vector<int> > &diag)
{
	if(!root)
		return;
	diag[curr].push_back(root->data);
	diagonal(root->left, curr-1, diag);
	diagonal(root->right, curr, diag);
}
int main()
{
	tree t1;
	t1.input();
	int min = 0, f;
	map<int, vector<int> > diag;
	diagonal(t1.root,0, diag);
	cout<<"\n";
	for (auto it = diagt.begin();it != diag.end(); ++it)
    {
        for (auto itr = it->second.begin();itr != it->second.end(); ++itr)
            cout << *itr  << ' ';
        cout << 'n';
    }
}
