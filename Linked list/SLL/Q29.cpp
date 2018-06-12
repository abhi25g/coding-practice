#include<iostream>
#include<ll.h>
using namespace std;
node* rev(node*ptr, int k)
{
	if(!ptr || !ptr->next)
		return ptr;
	node *prev = NULL, *temp = NULL, *hd = ptr;
	int i = 0;
	while(i < k && ptr)
	{
		temp = ptr->next;
		ptr->next = prev;
		prev = ptr;
		ptr = temp;
		i++;
	}
	hd->next = rev(temp, k);
	return prev;
}
int main()
{
	ll l1;
	node *prev, *ptr, *curr;
	int k;
	l1.att(1);
	l1.att(2);
	l1.att(5);
	l1.att(3);
	l1.att(6);
	l1.att(4);	
	l1.att(7);
	l1.att(8);
	l1.display();
	cout<<"\nEnter the size of groups ";
	cin>>k;
	l1.head = rev(l1.head,k);
	l1.display();
}
