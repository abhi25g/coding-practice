#include<iostream>
#include<ll.h>
using namespace std;
int main()
{
	ll l1;
	node *ptr, *prev, *nxt, *temp;
	cout<<"\nEnter the list ";
	l1.input();
	ptr = l1.head;
	prev = 0;
	nxt = ptr->next;
	while(ptr)
	{
		ptr->next = (node*)((uintptr_t)nxt^(uintptr_t)prev);
		prev = ptr;
		ptr = nxt;
		nxt = nxt->next;
	}
	ptr = l1.head;
	cout<<ptr->info<<" ";
	prev = NULL;
	nxt = ptr->next;
	while(ptr)
	{
		cout<<ptr->info<<" ";
		temp = ptr;
		ptr = (node*)((uintptr_t)ptr->next^(uintptr_t)prev);
		prev = temp;
		nxt = nxt->next;
	}
}
