#include <iostream>
using namespace std;
int main()
{
    int x[]={10,20,30,40};
    int sum=0;
    int avg,i;
    int n=sizeof(x)/sizeof (x[0]);
    for (i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    cout<<"sum:"<<sum<<endl;
    avg=sum/n;
    cout<<"average:"<<avg<<endl;
}