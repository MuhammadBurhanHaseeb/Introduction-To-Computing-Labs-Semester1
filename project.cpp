#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
 string st1_name , st2_name;
 float st1_matric,st1_fsc,st1_ecat,st2_matric,st2_fsc,st2_ecat;
 cout<<"***************************************************************"<<endl;
 cout<<"*           University Admission Management System            *"<<endl;
 cout<<"***************************************************************"<<endl;
 cout<<endl;
 cout<<endl;
 cout<<" Main Menu > "<<endl;
 cout<<"------------------------------"<<endl;
 cout<<"select one of the following options number.... "<<endl;
 int option;
 cout<<" 1. Add new student record"<<endl;
 cout<<" 2.view all records "<<endl;
 cout<<" 3.print the record in the merit order "<<endl;
 cout<<" 4.generate the merit list "<<endl;
 cout<<" 5.program seat management "<<endl;
 cout<<" 6.exist "<<endl;
 cout<<" choose the option";
 cin>>option;
 if(option==1)
 {
  cout<<" enter the student 1  name.. ";
  cin>>st1_name;
  cout<<" enter the student 1 matric no....";
  cin>>st1_matric;
  cout<<" enter the student 1 fsc marks";
  cin>>st1_fsc;
  cout<<" enter the student 1 ecat marks ";
  cin>>st1_ecat;
  }
 if (option==2)
 {
  cout<<"you do not save the data yet"<<endl; 
}
 if (option==3)
{
 cout<<"you do not saved the data yet";
}
 
 
 cout<<"***************************************************************"<<endl;
 cout<<"*           University Admission Management System            *"<<endl;
 cout<<"***************************************************************"<<endl;
 cout<<endl;
 cout<<endl;
 cout<<" Main Menu > "<<endl;
 cout<<"------------------------------"<<endl;
 cout<<"select one of the following options number.... "<<endl;
 cout<<" 1. Add new student record"<<endl;
 cout<<" 2.view all records "<<endl;
 cout<<" 3.print the record in the merit order "<<endl;
 cout<<" 4.generate the merit list "<<endl;
 cout<<" 5.program seat management "<<endl;
 cout<<" 6.exist "<<endl;
 cout<<" choose the option";
 cin>>option;
if(option==1)
{
  cout<<" enter the student 2 name.. ";
  cin>>st2_name;
  cout<<" enter the student 2 matric no....";
  cin>>st2_matric;
  cout<<" enter the student 2 fsc marks";
  cin>>st2_fsc;
  cout<<" enter the student 2 ecat marks ";
  cin>>st2_ecat;
  }
 if (option==2)
 {
  cout<<"you do not save the data yet"<<endl; 
}
 if (option==3)
{
 cout<<"you do not saved the data yet";

}

 


 cout<<"***************************************************************"<<endl;
 cout<<"*           University Admission Management System            *"<<endl;
 cout<<"***************************************************************"<<endl;
 cout<<endl;
 cout<<endl;
 cout<<" Main Menu > "<<endl;
 cout<<"------------------------------"<<endl;
 cout<<"select one of the following options number.... "<<endl;
 cout<<" 1. Add new student record"<<endl;
 cout<<" 2.view all records "<<endl;
 cout<<" 3.print the record in the merit order "<<endl;
 cout<<" 4.generate the merit list "<<endl;
 cout<<" 5.program seat management "<<endl;
 cout<<" 6.exist "<<endl;
 cout<<" choose the option";
 cin>>option;
if(option==1)
{
  cout<<" no space to saved the other student record.. "<<endl;
  
  }
 if (option==2)
 {
  cout<<" view the all records of the student";
  cout<<"Name"<<"       "<<"matric no"<<"           "<<"fsc no"<<"            "<<"ecat no"<<endl;
  cout<<st1_name<<"        "<<st1_matric<<"           "<<st1_fsc<<"            "<<st1_ecat<<endl;
  cout<<st2_name<<"        "<<st2_matric<<"           "<<st2_fsc<<"            "<<st2_ecat<<endl;
}
 if (option==3)
{
 cout<<"you do not saved the data yet";

}



 cout<<"***************************************************************"<<endl;
 cout<<"*           University Admission Management System            *"<<endl;
 cout<<"***************************************************************"<<endl;
 cout<<endl;
 cout<<endl;
 cout<<" Main Menu > "<<endl;
 cout<<"------------------------------"<<endl;
 cout<<"select one of the following options number.... "<<endl;
 cout<<" 1. Add new student record"<<endl;
 cout<<" 2.view all records "<<endl;
 cout<<" 3.print the record in the merit order "<<endl;
 cout<<" 4.generate the merit list "<<endl;
 cout<<" 5.program seat management "<<endl;
 cout<<" 6.exist "<<endl;
 cout<<" choose the option";
 cin>>option;
if(option==1)
{
  cout<<" no space to saved the other student record.. "<<endl;
  
  }
 if (option==2)
 {
  cout<<" view the all records of the student";
  cout<<"Name"<<"       "<<"matric no"<<"           "<<"fsc no"<<"            "<<"ecat no"<<endl;
  cout<<st1_name<<"        "<<st1_matric<<"           "<<st1_fsc<<"            "<<st1_ecat<<endl;
  cout<<st2_name<<"        "<<st2_matric<<"           "<<st2_fsc<<"            "<<st2_ecat<<endl;
}

 
if (option==3)
{
float agr_st_1,agr_st_2;
agr_st_1=((st1_matric/1100.0)*0.20)+((st1_fsc/1100.0)*0.20)+((st1_ecat/400.0)*0.60);
agr_st_2=((st2_matric/1100.0)*0.20)+((st2_fsc/1100.0)*0.20)+((st2_ecat/400.0)*0.60);
if(agr_st_1>agr_st_2)
{
 cout<<"merit list"<<endl;
  cout<<"Name"<<"       "<<"matric no"<<"           "<<"fsc no"<<"            "<<"ecat no"<<endl;
  cout<<st1_name<<"        "<<st1_matric<<"           "<<st1_fsc<<"            "<<st1_ecat<<endl;
  cout<<st2_name<<"        "<<st2_matric<<"           "<<st2_fsc<<"            "<<st2_ecat<<endl;
}
 else
{
  cout<<"merit list"<<endl;
  cout<<"Name"<<"       "<<"matric no"<<"           "<<"fsc no"<<"            "<<"ecat no"<<endl;
  cout<<st2_name<<"        "<<st2_matric<<"           "<<st2_fsc<<"            "<<st2_ecat<<endl;
   cout<<st1_name<<"        "<<st1_matric<<"           "<<st1_fsc<<"            "<<st1_ecat<<endl;
}


}

}




  