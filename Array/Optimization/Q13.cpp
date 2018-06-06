#include <iostream>
using namespace std;
int main()
{
    int *arr=NULL,size,i,res=1;
    cout<<"\nEnter the size of the array ";
    cin>>size;
    arr=new int[size];
    cout<<"\nEnter the array ";
    for(i=0;i<size;i++)
        cin>>arr[i];
    for(i=0;i<size;i++)
    {
    	if(arr[i]>res)
    		break;
    	else
    		res+=arr[i];
	}
	cout<<"\nThe smallest number that can not be represented is "<<res;
}
