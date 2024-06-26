#include <iostream>
using namespace std;
main()
{
 int no1 , no2 , totalNo;
 float sum;
 cout<<"enter the no1 ";
 cin>>no1;
 
 cout<<"enter the no2 ";
 cin>>no2;
 
 totalNo=no2-(no1-1);
 sum=totalNo/2*(no2 + no1);

 cout<<"sum of  numbers btw and including  this no also "<<no1<<"and"<<no2<<" is"<<sum;
}
 