#include <iostream>
using namespace std;
main()
{
    int no , sum =0;
    cout<<"enter the no";
    cin>>no;
    for(int x = no ; x > 0 ; x=x/10 )
    {
        int mode = x % 10;
       sum = sum + mode;
    }
    if (sum % 2 == 0)
    {
        cout<<"the sum of no is "<<sum <<" is "<< "evenish";
    } 
    else 
    cout<<"the sum of no is "<<sum <<" is "<< "oddish";

}