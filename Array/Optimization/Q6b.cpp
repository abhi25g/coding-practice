#include <iostream>
using namespace std;

int step(int*arr,int size)
{
	int *sol=new int[size];
	int i=0,j,min;
	sol[0]=0;
	for(i=1;i<size;i++)
	{
		min=1000;
		sol[i]=1000;
		for(j=0;j<i;j++)
		{
			if(sol[j]!=1000&&arr[j]>=i-j)
			{
				if(min>sol[j]+1)
				{
					min=sol[j]+1;
					break;
				}
			}
		}
		sol[i]=min;
	}
	return sol[size-1];
}

int main()
{
    int *arr=NULL,size,min,i;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
    {
    	cin>>arr[i];
    }
    min=step(arr,size);
    if(min!=1000)
    	cout<<"\nThe minimum number of step required is "<<min;
    else
    	cout<<"\nNot possible";
}
