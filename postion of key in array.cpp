#include <iostream>
using namespace std;
int main()
{
    int key,i;
    int x[]={10,20,30,40,40,50,60,70,40,80,90};
    int n=sizeof(x)/sizeof (x[0]);
    int count=0;
    cout<< "enter the number to be searched for:";
    cin>> key;
    for (i=0;i<n;i++)
    {
        if ( x[i]==key)
        {
            cout<<"position of the number is:"<<i+1<<endl;
            count=count+1;
        }
   
    }
    cout<<"number of times key is present: "<<count<<endl;
            
}

