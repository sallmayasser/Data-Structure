#include <iostream>

using namespace std;

int* LinearSearch(int* arr,int Size,int key,int &index)
{
    int* result = new int[Size];
    for(int i=0; i<Size; i++)
    {
        if(arr[i]==key)
        {
            result[index]=i;
            //*(result+1)=i;
            index++;
        }

    }
    return result;
}
int main()
{
    int arr[]= {5,6,8,3,4,3,1};
    int length = sizeof(arr)/sizeof(arr[0]);
    int resultLength =0;

    //int *ptr = LinearSearch(arr,length,10,resultLength); //not found

    int *ptr = LinearSearch(arr,length,3,resultLength); // found


    if(resultLength==0)
    {
        cout<<"Element not found"<<endl;
    }
    else
        for (int i = 0; i <resultLength ; i++)
        {
            cout << "Match found at index: " << ptr[i] << endl;
        }

    delete []ptr;

    return 0;
}
