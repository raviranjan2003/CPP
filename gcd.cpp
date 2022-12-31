#include<iostream>
using namespace std;
int main()
{
    cout<<"Raviii"<<endl;
    int m,n,hcf;
    cout<<"Enter two no:";
    cin>>m>>n;
    for (int i = 1; i < m; i++)
    {
        if (m%i==0 && n%i==0)
        {
            hcf=i;
        }
    }
    cout<<"HCF="<<hcf;
}