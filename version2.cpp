#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
  /* now in version project 2 we store the data of four student 
     then we view the record of the student
     then we soorting the student in merit order with aggrigate */
 string st1_name , st2_name , st3_name , st4_name;
 float st1_matric, st1_fsc, st1_ecat, st2_matric, st2_fsc, st2_ecat, st3_matric, st3_fsc, st3_ecat, st4_matric, st4_fsc, st4_ecat ;
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
    cout<<" enter the student 3 name.. ";
  cin>>st3_name;
  cout<<" enter the student 3 matric no....";
  cin>>st3_matric;
  cout<<" enter the student 3 fsc marks";
  cin>>st3_fsc;
  cout<<" enter the student 3 ecat marks ";
  cin>>st3_ecat;
  
  }
 if (option==2)
 {
   cout<<"you do not save the data yet";
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
     cout<<" enter the student 4 name.. ";
  cin>>st4_name;
  cout<<" enter the student 4 matric no....";
  cin>>st4_matric;
  cout<<" enter the student 4 fsc marks";
  cin>>st4_fsc;
  cout<<" enter the student 4 ecat marks ";
  cin>>st4_ecat;
  
  
  }
 if (option==2)
 {
  cout<<" the data is not saved yet";
 
}

 
if (option==3)
{
 cout<<" he dat is not saved yet";
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
   cout<<"you do not have the storage to save the data of the srudent"<<endl;
 }
  if (option==2)
 {
  cout<<" view the all records of the student";
  cout<<"Name"<<"       "<<"matric no"<<"           "<<"fsc no"<<"            "<<"ecat no"<<endl;
  cout<<st1_name<<"        "<<st1_matric<<"           "<<st1_fsc<<"            "<<st1_ecat<<endl;
  cout<<st2_name<<"        "<<st2_matric<<"           "<<st2_fsc<<"            "<<st2_ecat<<endl;
  cout<<st3_name<<"        "<<st3_matric<<"           "<<st3_fsc<<"            "<<st3_ecat<<endl;
  cout<<st4_name<<"        "<<st4_matric<<"           "<<st4_fsc<<"            "<<st4_ecat<<endl;
}
 if (option==3)
 {
   cout<<"the data is not saved yet";
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
   cout<<"you do not have the storage to save the data of the srudent"<<endl;
 }
  if (option==2)
 {
  cout<<" view the all records of the student"<<endl;
  cout<<"Name"<<"       "<<"matric no"<<"           "<<"fsc no"<<"            "<<"ecat no"<<endl;
  cout<<st1_name<<"        "<<st1_matric<<"           "<<st1_fsc<<"            "<<st1_ecat<<endl;
  cout<<st2_name<<"        "<<st2_matric<<"           "<<st2_fsc<<"            "<<st2_ecat<<endl;
  cout<<st3_name<<"        "<<st3_matric<<"           "<<st3_fsc<<"            "<<st3_ecat<<endl;
  cout<<st4_name<<"        "<<st4_matric<<"           "<<st4_fsc<<"            "<<st4_ecat<<endl;
}
 if (option==3)

{
float agr_st_1, agr_st_2, agr_st_3, agr_st_4;
agr_st_1=((st1_matric/1100.0)*0.20)+((st1_fsc/1100.0)*0.20)+((st1_ecat/400.0)*0.60);
agr_st_2=((st2_matric/1100.0)*0.20)+((st2_fsc/1100.0)*0.20)+((st2_ecat/400.0)*0.60);
agr_st_3=((st3_matric/1100.0)*0.20)+((st3_fsc/1100.0)*0.20)+((st3_ecat/400.0)*0.60);
agr_st_4=((st4_matric/1100.0)*0.20)+((st4_fsc/1100.0)*0.20)+((st4_ecat/400.0)*0.60);
 cout<<"merit list"<<endl;
  cout<<"Name"<<"       "<<"matric no"<<"           "<<"fsc no"<<"            "<<"ecat no"<<endl;
if(agr_st_1>agr_st_2 && agr_st_1>agr_st_3 && agr_st_1 > agr_st_4)
{
  cout<<st1_name<<"      "<<st1_matric<<"           "<<st1_fsc<<"             "<<st1_ecat<<endl;

    if (agr_st_2 > agr_st_3 && agr_st_2 > agr_st_4)
    {
      cout<<st2_name<<"      "<<st2_matric<<"           "<<st2_fsc<<"             "<<st2_ecat<<endl;
      if (agr_st_3 > agr_st_4)
             
             {
               cout<<st3_name<<"      "<<st3_matric<<"           "<<st3_fsc<<"             "<<st3_ecat<<endl;
               cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
             }
             else
             {
               cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
               cout<<st3_name<<"      "<<st3_matric<<"           "<<st3_fsc<<"             "<<st3_ecat<<endl;
             }
    }
    else if (agr_st_3 > agr_st_2 && agr_st_3 > agr_st_4)
       {
         cout<<st3_name<<"      "<<st3_matric<<"           "<<st3_fsc<<"             "<<st3_ecat<<endl;
         if (agr_st_2 > agr_st_4)
            {
               cout<<st2_name<<"      "<<st2_matric<<"           "<<st2_fsc<<"             "<<st2_ecat<<endl;
               cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
            }
            else
            {
               cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
               cout<<st2_name<<"      "<<st2_matric<<"           "<<st2_fsc<<"             "<<st2_ecat<<endl;
            }
       }
       else 
       {
       cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
       }
       if (agr_st_3 > agr_st_2)
         {
            cout<<st3_name<<"      "<<st3_matric<<"           "<<st3_fsc<<"             "<<st3_ecat<<endl;
            cout<<st2_name<<"      "<<st2_matric<<"           "<<st2_fsc<<"             "<<st2_ecat<<endl;
         }
         else
         {
           cout<<st2_name<<"      "<<st2_matric<<"           "<<st2_fsc<<"             "<<st2_ecat<<endl;
           cout<<st3_name<<"      "<<st3_matric<<"           "<<st3_fsc<<"             "<<st3_ecat<<endl;

         }
 }
else if(agr_st_2>agr_st_1 && agr_st_2>agr_st_3 && agr_st_1 > agr_st_4)
{
  cout<<st2_name<<"      "<<st2_matric<<"           "<<st2_fsc<<"             "<<st2_ecat<<endl;

    if (agr_st_1 > agr_st_3 && agr_st_1 > agr_st_4)
    {
      cout<<st1_name<<"      "<<st1_matric<<"           "<<st1_fsc<<"             "<<st1_ecat<<endl;
      if (agr_st_3 > agr_st_4)
             
             {
               cout<<st3_name<<"      "<<st3_matric<<"           "<<st3_fsc<<"             "<<st3_ecat<<endl;
               cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
             }
             else
             {
               cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
               cout<<st3_name<<"      "<<st3_matric<<"           "<<st3_fsc<<"             "<<st3_ecat<<endl;
             }
    }
    else if (agr_st_3 > agr_st_1 && agr_st_3 > agr_st_4)
       {
         cout<<st3_name<<"      "<<st3_matric<<"           "<<st3_fsc<<"             "<<st3_ecat<<endl;
         if (agr_st_1 > agr_st_4)
            {
               cout<<st1_name<<"      "<<st1_matric<<"           "<<st1_fsc<<"             "<<st1_ecat<<endl;
               cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
            }
            else
            {
               cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
               cout<<st1_name<<"      "<<st1_matric<<"           "<<st1_fsc<<"             "<<st1_ecat<<endl;
            }
       }
       else 
       {
       cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
       }
       if (agr_st_3 > agr_st_1)
         {
            cout<<st3_name<<"      "<<st3_matric<<"           "<<st3_fsc<<"             "<<st3_ecat<<endl;
            cout<<st1_name<<"      "<<st1_matric<<"           "<<st1_fsc<<"             "<<st1_ecat<<endl;
         }
         else
         {
           cout<<st1_name<<"      "<<st1_matric<<"           "<<st1_fsc<<"             "<<st1_ecat<<endl;
           cout<<st3_name<<"      "<<st3_matric<<"           "<<st3_fsc<<"             "<<st3_ecat<<endl;

         }

 }
 else if(agr_st_3>agr_st_1 && agr_st_3>agr_st_2 && agr_st_3 > agr_st_4)
{
  cout<<st3_name<<"      "<<st3_matric<<"           "<<st3_fsc<<"             "<<st3_ecat<<endl;

    if (agr_st_1 > agr_st_2 && agr_st_1 > agr_st_4)
    {
      cout<<st1_name<<"      "<<st1_matric<<"           "<<st1_fsc<<"             "<<st1_ecat<<endl;
      if (agr_st_2 > agr_st_4)
             
             {
               cout<<st2_name<<"      "<<st2_matric<<"           "<<st2_fsc<<"             "<<st2_ecat<<endl;
               cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
             }
             else
             {
               cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
               cout<<st2_name<<"      "<<st2_matric<<"           "<<st2_fsc<<"             "<<st2_ecat<<endl;
             }
    }
    else if (agr_st_2 > agr_st_1 && agr_st_2 > agr_st_4)
       {
         cout<<st2_name<<"      "<<st2_matric<<"           "<<st2_fsc<<"             "<<st2_ecat<<endl;
         if (agr_st_1 > agr_st_4)
            {
               cout<<st1_name<<"      "<<st1_matric<<"           "<<st1_fsc<<"             "<<st1_ecat<<endl;
               cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
            }
            else
            {
               cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
              cout<<st1_name<<"      "<<st1_matric<<"           "<<st1_fsc<<"             "<<st1_ecat<<endl;
            }
       }
       else 
       {
       cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
       }
       if (agr_st_2 > agr_st_1)
         {
            cout<<st2_name<<"      "<<st2_matric<<"           "<<st2_fsc<<"             "<<st2_ecat<<endl;
            cout<<st1_name<<"      "<<st1_matric<<"           "<<st1_fsc<<"             "<<st1_ecat<<endl;
         }
         else
         {
           cout<<st1_name<<"      "<<st1_matric<<"           "<<st1_fsc<<"             "<<st1_ecat<<endl;
           cout<<st2_name<<"      "<<st2_matric<<"           "<<st2_fsc<<"             "<<st2_ecat<<endl;
         }
 }
  else if(agr_st_4>agr_st_1 && agr_st_4>agr_st_2 && agr_st_4> agr_st_3)
{
  cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;

    if (agr_st_1 > agr_st_4 && agr_st_1 > agr_st_3)
    {
      cout<<st1_name<<"      "<<st1_matric<<"           "<<st1_fsc<<"             "<<st1_ecat<<endl;
      if (agr_st_4 > agr_st_3)
             
             {
               cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
               cout<<st3_name<<"      "<<st3_matric<<"           "<<st3_fsc<<"             "<<st3_ecat<<endl;
             }
             else
             {
               cout<<st3_name<<"      "<<st3_matric<<"           "<<st3_fsc<<"             "<<st3_ecat<<endl;
               cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
             }
    }
    else if (agr_st_4 > agr_st_1 && agr_st_4 > agr_st_3)
       {
         cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
         if (agr_st_1 > agr_st_3)
            {
               cout<<st1_name<<"      "<<st1_matric<<"           "<<st1_fsc<<"             "<<st1_ecat<<endl;
               cout<<st3_name<<"      "<<st3_matric<<"           "<<st3_fsc<<"             "<<st3_ecat<<endl;
            }
            else
            {
               cout<<st3_name<<"      "<<st3_matric<<"           "<<st3_fsc<<"             "<<st3_ecat<<endl;
              cout<<st1_name<<"      "<<st1_matric<<"           "<<st1_fsc<<"             "<<st1_ecat<<endl;
            }
       }
       else 
       {
       cout<<st3_name<<"      "<<st3_matric<<"           "<<st3_fsc<<"             "<<st3_ecat<<endl;
       }
       if (agr_st_4 > agr_st_1)
         {
            cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
            cout<<st1_name<<"      "<<st1_matric<<"           "<<st1_fsc<<"             "<<st1_ecat<<endl;
         }
         else
         {
           cout<<st1_name<<"      "<<st1_matric<<"           "<<st1_fsc<<"             "<<st1_ecat<<endl;
           cout<<st4_name<<"      "<<st4_matric<<"           "<<st4_fsc<<"             "<<st4_ecat<<endl;
         }
 }


 

}// end brracket of main 
}



  