#include <iostream>
#include<fstream>
using namespace std;
int loginmenu();
void addstudents(string sname, int sage, string schooln , int matric,string college  , int fsc , int ecat);
void student_detail();
void storefile(string sname, int sage, string schooln , int matric, string cname , int fsc , int ecat );
const int value = 10;
string S_nameA[value];
string school_nameA[value];
string c_nameA[value];
int S_ageA[value];
int matricA[value];
int fscA[value];
int ecatA[value];
int count =0;
fstream f;
main()
{

while (true)
{
int option = loginmenu();
if (option == 1)
{   
   student_detail();
}
if (option == 2)
{
    break;
}
else 
{
    cout<<"invalid option";
}
}// end of while
}// end of main
void student_detail()
{
string S_name ,school_name , C_name;
int S_age , matric , fsc , ecat;
cout<<"enter the name of the student";
cin>>S_name;
cout<<"enter the age of the student";
cin>>S_age;
cout<<"enter the name of the school";
cin>>school_name;
cout<<"enter the marks of the matric";
cin>>matric;
cout<<"enter the name of the college";
cin>>C_name;
cout<<"enter the marks of the fsc";
cin>>fsc;
cout<<"enter the marks of the ecat";
cin>>ecat;
addstudents(S_name,S_age,school_name,matric,C_name , fsc, ecat);

}
void addstudents(string sname, int sage, string schooln , int matric,string college  , int fsc , int ecat )
{
   S_nameA[count] = sname;
    S_ageA[count] = sage;
   school_nameA[count] = schooln;
    matricA[count] = matric;
   c_nameA[count] = college;
   fscA[count] = fsc;
   ecatA[count]= ecat;
   storefile(S_nameA[count] ,S_ageA[count] , school_nameA[count] , matricA[count] , c_nameA[count] , fscA[count] , ecatA[count] );
   count++;
  
}
void storefile(string sname, int sage, string schooln , int matric,string college  , int fsc , int ecat  )
{
f.open("student_data_comma.txt" , ios :: app);
f<<sname<<","<<sage<<","<<schooln<<","<<matric<<","<<college<<","<<fsc<<","<<ecat<<endl;
f.close();
}
int loginmenu()
{
    cout<<"1. add student in array"<<endl;
    cout<<"2 . exist"<<endl;
    int op;
    cout<<"enter the option ";
    cin>>op;
    return op;
}
// f<<"student name"<<","<<"student age"<<","<<"school name"<<","<<"matric marks"<<","<<"college name"<<","<<"fsc marks"<<","<<"ecat marks"<<endl;