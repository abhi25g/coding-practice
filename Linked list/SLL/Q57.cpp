#include<iostream>
#include<ll.h>
using namespace std;
int main()
{
	ll l1;
	node *ptr;
	int i = 0, temp;
	l1.input();
	l1.display(l1.head);
	ptr = l1.head;
	while(ptr->next)
	{
		if(i%2 == 0)
		{
			if(ptr->info > ptr->next->info)
			{
				temp = ptr->info;
				ptr->info = ptr->next->info;
				ptr->next->info = temp;
			}
		}
		else
		{
			if(ptr->info < ptr->next->info)
			{
				temp = ptr->info;
				ptr->info = ptr->next->info;
				ptr->next->info = temp;
			}
		}
		ptr = ptr->next;
		i++;
	}
	l1.display(l1.head);
}
