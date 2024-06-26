#include <iostream>
using namespace std;
main()
{
    int no , div ;
    cout<<"enter the no";
    cin>>no;
    int a = no % 10;
    div = no / 10;
    int b = div % 10;
    div = no / 10;
    int c = div% 10;
   int  sum = (a*a*a)+(b*b*b)+(c*c*c);
   if (no == sum )
   {
       cout<< "the no is armstrong";
   }
   else {
     cout<< "the no is not armstrong";
    }
    cout<< a<<b<<c;
cout<<sum;
}