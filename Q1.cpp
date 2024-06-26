#include <iostream>
using namespace std;
main()
{
    int salary  , target;
    float percentage , months;
    cout<< "enter the target you reach";
    cin>>target;
    cout<<"enter the salary";
    cin>>salary;
    cout<<"enter the percentage";
    cin>>percentage;
    percentage = salary * percentage/100;
    months = target / percentage ;
    if (months < 4)
    {
        cout<<"nice";
    }
    else
    {
    cout<<" you should require the "<<months <<"  months to reach the target";
    }  




}