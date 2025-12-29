
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {   int mini=i;

        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[mini])
            {
               mini=j;
            }

        }

   swap(arr[i],arr[mini]);
    }
}
int main()
{
    int arr[]= {5,8,7,10,9,1,3,11};
    int n=sizeof(arr)/sizeof(int);
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
