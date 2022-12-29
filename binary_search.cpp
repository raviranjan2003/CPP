/*
#include <iostream>
using namespace std;
int main()
{
    int A[10] = {2, 4, 5, 7, 9, 11, 13, 15, 18, 20};
    int l = 0, h = 9, mid, search;
    cout << "Enter the no to be search : ";
    cin >> search;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (search == A[mid])
        {
            cout << "Found at:" << mid << endl;
            return 0;
        }
        else if (search < A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "Not found";
    return 0;
}*/

// OR 


#include<iostream>
using namespace std;

int main()
{
    int search,arr[50];
    int n;             // l= lower index      h= higher index
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the elements of array in ascending order : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int l=0,h=(n-1);

    cout<<"Enter the elements to be search: ";
    cin>>search;
    for (int i = 0; i < n; i++)
    {
        int mid=(l+h)/2;
        if (search == arr[mid])
        {
            cout<<search<<" is found in "<<i+1<<" iteration and at index "<<mid<<endl;
            break;
        }
        else if (search < arr[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    
    return 0;
}