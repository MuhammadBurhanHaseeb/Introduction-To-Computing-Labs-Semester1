#include <iostream>
#include <cmath>
using namespace std;
// function prototype
void functionheader();
int menu();
void display(string name, float matric, float fsc, float ecat);
float agrigate(float matric, float fsc, float ecat);
 
main()

{
  int exists =0;
  string st1_name, st2_name, st3_name, st4_name;
  float st1_matric, st1_fsc, st1_ecat, st2_matric, st2_fsc, st2_ecat, st3_matric, st3_fsc, st3_ecat, st4_matric, st4_fsc, st4_ecat;

  int option;
  option = menu();
  cout << option;
  if (option == 1)
  {
    cout << " enter the student 1  name.. ";
    cin >> st1_name;
    cout << " enter the student 1 matric no....";
    cin >> st1_matric;
    cout << " enter the student 1 fsc marks";
    cin >> st1_fsc;
    cout << " enter the student 1 ecat marks ";
    cin >> st1_ecat;
  }
  if (option == 2)
  {
    cout << "not yet saved data";
  }
  if (option == 3)
  {
    cout << "you do not saved the data yet";
  }
  if (option == 4)
  {
    exists = 1;
  }

  if (exists == 0)
  {
    option = menu();
    cout << option;

    if (option == 1)
    {
      cout << " enter the student 2  name.. ";
      cin >> st2_name;
      cout << " enter the student 2 matric no....";
      cin >> st2_matric;
      cout << " enter the student 2 fsc marks";
      cin >> st2_fsc;
      cout << " enter the student 2 ecat marks ";
      cin >> st2_ecat;
    }
    if (option == 2)
    {
      cout << "not yet saved data";
    }
    if (option == 3)
    {
      cout << "you do not saved the data yet";
    }
    if (option == 4)
    {
      exists =1;
    }
   }// end of exists

    if (exists ==0)
    {
    option = menu();
    cout << option;

    if (option == 1)
    {
      cout << " enter the student 3  name.. ";
      cin >> st3_name;
      cout << " enter the student 3 matric no....";
      cin >> st3_matric;
      cout << " enter the student 3 fsc marks";
      cin >> st3_fsc;
      cout << " enter the student 3 ecat marks ";
      cin >> st3_ecat;
    }
    if (option == 2)
    {
      cout << "not yet saved data";
    }
    if (option == 3)
    {
      cout << "you do not saved the data yet";
    }
    if (option == 4)
    {
      exists = 1;
    }
  }//end of exists

  if (exists == 0)
  {

    option = menu();
    cout << option;

    if (option == 1)
    {
      cout << " enter the student 4  name.. ";
      cin >> st4_name;
      cout << " enter the student 4 matric no....";
      cin >> st4_matric;
      cout << " enter the student 4 fsc marks";
      cin >> st4_fsc;
      cout << " enter the student 4 ecat marks ";
      cin >> st4_ecat;
    }
    if (option == 2)
    {
      cout << "not yet saved data";
    }
    if (option == 3)
    {
      cout << "you do not saved the data yet";
    }
    if (option ==4)
    {
      exists =1;
    }
  }// end of exists

   if (exists == 0)
   {
    option = menu();
    cout << option;

    if (option == 1)
    {
      cout << " not have space to sav data";
    }
    if (option == 2)
    {
      cout << " view the all records of the student" << endl;
      cout << "Name"<< "       "<< "matric no"<< "           "<< "fsc no"<< "            "<< "ecat no" << endl;
      display(st1_name, st1_matric, st1_fsc, st1_ecat);
      display(st2_name, st2_matric, st2_fsc, st2_ecat);
      display(st3_name, st3_matric, st3_fsc, st3_ecat);
      display(st4_name, st4_matric, st4_fsc, st4_ecat);
    }
    if (option == 3)
    {
      cout << "you do not saved the data yet";
    }
    if (option == 4)
    {
      exists = 1;
    }
  }// end of exists

  if (exists == 0)
  {

    option = menu();
    cout << option;

    if (option == 1)
    {
      cout << " not have space to sav data";
    }
    if (option == 2)
    {
      cout << " view the all records of the student" << endl;
      cout << "Name"<< "       "<< "matric no"<< "           "<< "fsc no"<< "            "<< "ecat no" << endl;
      display(st1_name, st1_matric, st1_fsc, st1_ecat);
      display(st2_name, st2_matric, st2_fsc, st2_ecat);
      display(st3_name, st3_matric, st3_fsc, st3_ecat);
      display(st4_name, st4_matric, st4_fsc, st4_ecat);
    }
    if (option == 3)
    {
      float agr_st_1;
      agr_st_1 = agrigate(st1_matric, st1_fsc, st1_ecat);
      float agr_st_2;
      agr_st_2 = agrigate(st2_matric, st2_fsc, st2_ecat);
      float agr_st_3;
      agr_st_3 = agrigate(st3_matric, st3_fsc, st3_ecat);
      float agr_st_4;
      agr_st_4 = agrigate(st4_matric, st4_fsc, st4_ecat);
      cout << "merit list" << endl;
      cout << "Name" << "       "<< "matric no"<< "           "<< "fsc no"<< "            "<< "ecat no" << endl;
      if (agr_st_1 > agr_st_2 && agr_st_1 > agr_st_3 && agr_st_1 > agr_st_4)
      {
       display(st1_name, st1_matric, st1_fsc, st1_ecat);

        if (agr_st_2 > agr_st_3 && agr_st_2 > agr_st_4)
        {
           display(st2_name, st2_matric, st2_fsc, st2_ecat);
          if (agr_st_3 > agr_st_4)

          {
             display(st3_name, st3_matric, st3_fsc, st3_ecat);
             display(st4_name, st4_matric, st4_fsc, st4_ecat);
          }
          else
          {
             display(st4_name, st4_matric, st4_fsc, st4_ecat);
             display(st3_name, st3_matric, st3_fsc, st3_ecat);
          }
        }
        else if (agr_st_3 > agr_st_2 && agr_st_3 > agr_st_4)
        {
          display(st3_name, st3_matric, st3_fsc, st3_ecat);
          if (agr_st_2 > agr_st_4)
          {
             display(st2_name, st2_matric, st2_fsc, st2_ecat);
             display(st4_name, st4_matric, st4_fsc, st4_ecat);
          }
          else
          {
             display(st4_name, st4_matric, st4_fsc, st4_ecat);
            display(st2_name, st2_matric, st2_fsc, st2_ecat);
          }
        }
        else
        {
          display(st4_name, st4_matric, st4_fsc, st4_ecat);
        }
        if (agr_st_3 > agr_st_2)
        {
          display(st3_name, st3_matric, st3_fsc, st3_ecat);
          display(st2_name, st2_matric, st2_fsc, st2_ecat);
        }
        else
        {
          display(st2_name, st2_matric, st2_fsc, st2_ecat);
          display(st3_name, st3_matric, st3_fsc, st3_ecat);
        }
      }
      else if (agr_st_2 > agr_st_1 && agr_st_2 > agr_st_3 && agr_st_1 > agr_st_4)
      {
        display(st2_name, st2_matric, st2_fsc, st2_ecat);

        if (agr_st_1 > agr_st_3 && agr_st_1 > agr_st_4)
        {
          display(st1_name, st1_matric, st1_fsc, st1_ecat);
          if (agr_st_3 > agr_st_4)

          {
            display(st3_name, st3_matric, st3_fsc, st3_ecat);
             display(st4_name, st4_matric, st4_fsc, st4_ecat);
          }
          else
          {
            display(st4_name, st4_matric, st4_fsc, st4_ecat);
            display(st3_name, st3_matric, st3_fsc, st3_ecat);
          }
        }
        else if (agr_st_3 > agr_st_1 && agr_st_3 > agr_st_4)
        {
          display(st3_name, st3_matric, st3_fsc, st3_ecat);
          if (agr_st_1 > agr_st_4)
          {
           display(st1_name, st1_matric, st1_fsc, st1_ecat);
             display(st4_name, st4_matric, st4_fsc, st4_ecat);
          }
          else
          {
            display(st4_name, st4_matric, st4_fsc, st4_ecat);
           display(st1_name, st1_matric, st1_fsc, st1_ecat);
          }
        }
        else
        {
           display(st4_name, st4_matric, st4_fsc, st4_ecat);
        }
        if (agr_st_3 > agr_st_1)
        {
          display(st3_name, st3_matric, st3_fsc, st3_ecat);
          display(st1_name, st1_matric, st1_fsc, st1_ecat);
        }
        else
        {
         display(st1_name, st1_matric, st1_fsc, st1_ecat);
           display(st3_name, st3_matric, st3_fsc, st3_ecat);
        }
      }
      else if (agr_st_3 > agr_st_1 && agr_st_3 > agr_st_2 && agr_st_3 > agr_st_4)
      {
         display(st3_name, st3_matric, st3_fsc, st3_ecat);

        if (agr_st_1 > agr_st_2 && agr_st_1 > agr_st_4)
        {
          display(st1_name, st1_matric, st1_fsc, st1_ecat);
          if (agr_st_2 > agr_st_4)

          {
             display(st2_name, st2_matric, st2_fsc, st2_ecat);
             display(st4_name, st4_matric, st4_fsc, st4_ecat);
          }
          else
          {
             display(st4_name, st4_matric, st4_fsc, st4_ecat);
            display(st2_name, st2_matric, st2_fsc, st2_ecat);
          }
        }
        else if (agr_st_2 > agr_st_1 && agr_st_2 > agr_st_4)
        {
          display(st2_name, st2_matric, st2_fsc, st2_ecat);
          if (agr_st_1 > agr_st_4)
          {
           display(st1_name, st1_matric, st1_fsc, st1_ecat);
             display(st4_name, st4_matric, st4_fsc, st4_ecat);
          }
          else
          {
             display(st4_name, st4_matric, st4_fsc, st4_ecat);
            display(st1_name, st1_matric, st1_fsc, st1_ecat);
          }
        }
        else
        {
         display(st4_name, st4_matric, st4_fsc, st4_ecat);
        }
        if (agr_st_2 > agr_st_1)
        {
           display(st2_name, st2_matric, st2_fsc, st2_ecat);
          display(st1_name, st1_matric, st1_fsc, st1_ecat);
        }
        else
        {
          display(st1_name, st1_matric, st1_fsc, st1_ecat);
          display(st2_name, st2_matric, st2_fsc, st2_ecat);
        }
      }
      else if (agr_st_4 > agr_st_1 && agr_st_4 > agr_st_2 && agr_st_4 > agr_st_3)
      {
         display(st4_name, st4_matric, st4_fsc, st4_ecat);

        if (agr_st_1 > agr_st_4 && agr_st_1 > agr_st_3)
        {
          display(st1_name, st1_matric, st1_fsc, st1_ecat);
          if (agr_st_4 > agr_st_3)

          {
            display(st4_name, st4_matric, st4_fsc, st4_ecat);
             display(st3_name, st3_matric, st3_fsc, st3_ecat);
          }
          else
          {
             display(st3_name, st3_matric, st3_fsc, st3_ecat);
             display(st4_name, st4_matric, st4_fsc, st4_ecat);
          }
        }
        else if (agr_st_4 > agr_st_1 && agr_st_4 > agr_st_3)
        {
           display(st4_name, st4_matric, st4_fsc, st4_ecat);
          if (agr_st_1 > agr_st_3)
          {
           display(st1_name, st1_matric, st1_fsc, st1_ecat);
             display(st3_name, st3_matric, st3_fsc, st3_ecat);
          }
          else
          {
             display(st3_name, st3_matric, st3_fsc, st3_ecat);
            display(st1_name, st1_matric, st1_fsc, st1_ecat);
          }
        }
        else
        {
          display(st3_name, st3_matric, st3_fsc, st3_ecat);
        if (agr_st_4 > agr_st_1)
        {
          display(st4_name, st4_matric, st4_fsc, st4_ecat);
          display(st1_name, st1_matric, st1_fsc, st1_ecat);
        }
        else
        {
           display(st1_name, st1_matric, st1_fsc, st1_ecat);
          display(st4_name, st4_matric, st4_fsc, st4_ecat);
        }
      }
      if (option == 4)
      {
        exists =1;
      }
    }// end of exists
    
    
    }
      
  }
  
 }// end of main function

// function of header
void functionheader()
{
  cout << "***************************************************************" << endl;
  cout << "*           University Admission Management System            *" << endl;
  cout << "***************************************************************" << endl;
  cout << endl;
  cout << endl;
}

// function of menu
int menu()
{
  functionheader();
  cout << " Main Menu > " << endl;
  cout << "------------------------------" << endl;
  cout << "select one of the following options number.... " << endl;
  int option;
  cout << " 1. Add new student record" << endl;
  cout << " 2.view all records " << endl;
  cout << " 3.print the record in the merit order " << endl;
  cout << " 4.generate the merit list " << endl;
  cout << " 5.program seat management " << endl;
  cout << " 6.exist " << endl;
  cout << " choose the option"<<endl;
  cin >> option;
  return option;
}

// function of the view record
void display(string name, float matric, float fsc, float ecat)
{

  cout << name << "          " << matric << "                    " << fsc << "          " << ecat << endl;
}



// function of the agrigate and sorting
float agrigate(float matric, float fsc, float ecat)
 {
  float agrigate = ((matric / 1100.0) * 0.20) + ((fsc / 1100.0) * 0.20) + ((ecat / 400.0) * 0.60);
  return agrigate;
 }
