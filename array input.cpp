#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter number of elements required:";
    cin>>n;
    int x[n];
    for (i=0;i<n;++i)
    {
        cout<<"enter elements of array:";
        cin>> x[i];
    }

    for(i=0;i<n;i++)
    {
        cout<< x[i]<<endl;
    }
    
}