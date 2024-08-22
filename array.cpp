#include <iostream>
using namespace std;
int main()
{
    int x[5]={10,20,30,40,50};
    int i;
    int n=sizeof(x)/sizeof(x[0]);
    for (i=0;i<n;i++)
    {
        cout<< x[i] <<endl;
    }
}
/*OUTPUT
10
20
30
40
50
*/
