#include <iostream>

using namespace std;

int BinarySearch(int* arr, int Size, int key)
{
    int start=0, end=Size-1 ;

    while(start<=end)
    {
        int mid=(start+end)/2;

        if (arr[mid]==key)
            return mid ;
        else if (arr[mid]<key)
        {
            start=mid+1;
        }
        else if (arr[mid]>key)
        {
            end = mid-1;
        }

    }
    return -1 ;
}
int main()
{
    int arr[]= {10,20,50,70,80,100,150};
    int length = sizeof(arr)/sizeof(arr[0]);

    // int index = BinarySearch(arr,length,60);   ///not found

    int index = BinarySearch(arr,length,100); ///found

    index==-1?cout<<"Element not found"<<endl:cout<<"Match found at index: "<<index<<endl;
    return 0;
}
