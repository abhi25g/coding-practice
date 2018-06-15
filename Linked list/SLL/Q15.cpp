#include<iostream>
#include<conio.h>
#include<cll.h>
using namespace std;
int main()
{
	ll l1;
	node *m, *ptr;
	int f = 0;
	cout<<"\nEnter the list ";
	l1.input();
	display(l1.head);
	if(!l1.head->next)
	{
		cout<<"\nPalindrome";
		getch();
		return 1;
	}
	m = l1.mid();
	m->next = reverse(m->next);
	m = m->next;
	ptr = l1.head;
	while(ptr && m)
	{
		if(ptr->info != m->info)
		{
			f++;
			break;
		}
		ptr = ptr->next;
		m = m->next;
	}
	if(f)
		cout<<"\nNot palindrome";
	else
		cout<<"\nPalindrome";
}
