#include<iostream>
using namespace std;
void binary(int arr[],int start,int end,int key,int &index)
{
    if(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
            {index=mid;
            return;}
        else if(arr[mid]>key)
        {
            return binary(arr,start,mid-1,key,index);

        }
        else
            return binary(arr,mid+1,end,key,index);
    }

}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int key;
    cin>>key;
    int index=-1;
    binary(arr,0,n-1,key,index);
if(index==-1)
    cout<<index;
else
    cout<<index;
}
