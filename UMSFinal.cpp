//________Header Files________________
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
// _____________________Prototypes________________
void mainHeader();
char adminMenu();
void clearScreen();
string loginMenu();
void addStudent();
void viewAllStudents();
void subheader();
char studentMenu();
void addStudentIntoArray(string name, float matric, float fsc, float ecat, string p1, string p2, string p3);
int seatManagementMenu();
void viewSeatsDetails();
void addUser(string name, string pass, string role);
int  print_Recd();
float aggrigate();
int  generate_Mlist();
int studentInfo();
//_____________________Data Structures_______________________
const int MAX_RECORDS = 20;
string usernameA[MAX_RECORDS];
string passwordsA[MAX_RECORDS];
string rolesA[MAX_RECORDS];
int userCount = 0;
int count = 0;
string student_name[MAX_RECORDS];
float student_ecat[MAX_RECORDS];
float student_matric[MAX_RECORDS];
float student_fsc[MAX_RECORDS];
string student_pref1[MAX_RECORDS];
string student_pref2[MAX_RECORDS];
string student_pref3[MAX_RECORDS];
float aggr[MAX_RECORDS];
float aggr2[MAX_RECORDS];
int entry_count = 0;
string department[] = {"CS", "CE", "EE"};
int seats[] = {0, 0, 0};
int capacity = 0;
bool announce = false;
string username;
string loginusername;
int idx1;
int idx2;
//_____________ Main function___________
main()
{
 addUser("admin", "123", "ADMIN"); //__________DEFAULT VALUE SET__________
 addUser("ali" , "123" , "STUDENT");//__________DEFAULT VALUE SET__________
 string who = " ";
 while (true)
 {
 who = loginMenu();
 if (who == "ADMIN")
 {
   cout<<"welcom admin";
 char option = ' ';
 while (true)
 {
 system("cls");
 option = adminMenu();
 if (option == '1')
 {
 addStudent();
 }
 else if (option == '2')
 {
 viewAllStudents();
 }
 else if (option == '3')
 {
 //----------Print the record in merit order
 int result;
 aggrigate();
for (int i = 0 ; i <count ; i++)
{
 result = print_Recd();
 cout<<student_name[result]<<"\t"<<student_matric[result]<<"\t"<<student_fsc[result]<<"\t"<<student_ecat[result]<<"\t"<<aggr[result]<<endl;

}
 
}
 else if (option == '4')
 {
   int n;
 //------------ Generate merit list
 for (int i = 0 ; i <count ; i++)
 {
  n = generate_Mlist();
   cout<<student_name[n]<<"\t"<<student_matric[n]<<"\t"<<student_fsc[n]<<"\t"<<student_ecat[n]<<"\t"<<aggr[n]<<"\t"<<student_pref1[n]<<"\t"<<student_pref2[n]<<"\t"<<student_pref3[n]<<endl;
 }
 }
 else if (option == '5')
 {
 //------------ Add Users
 cout << "Enter username........ ";
 string username;
 cin >> username;
 cout << "Enter password........ ";
 string pass;
 cin >> pass;
 cout << "Enter role........";
 string role;
 cin >> role;
 addUser(username, pass, role);
 }
 else if (option == '6')
 {
 while (true)
 {
 system("cls");
 int dpIndex = seatManagementMenu();
 if (dpIndex == 1 || dpIndex == 2 || dpIndex == 3)
 {
 cout << "Enter New Capacity for " <<department[dpIndex - 1] << endl;
 cin >> capacity;
 seats[dpIndex - 1] = capacity;
 }
 else if (dpIndex == 4)
 {
 viewSeatsDetails();
 clearScreen();
 }
 else if (dpIndex == 5)
 {
 break;
 }
 else
 {
 cout << "You chose wrong option!" << endl;
 clearScreen();
 }
 } //end of seats management
 }
 else if (option == '7')
 {
 cout << "Press 2 to Announce the Result ";
 int annouce;
 cin >> annouce;
 if (annouce == 2)
 {
 announce = true;
 }
 }
 else if (option == '8')
 {
 break;
 }
 else
 {
 cout << "You Chose Wrong option " << endl;
 }
 clearScreen();
 } //end of admin wile loop
 }
 else if (who == "STUDENT")
 {
 char studentOption = ' ';
 while (true)
 {
 system("cls");
 studentOption = studentMenu();
 if (studentOption == '1')
 {
 // View student information
  studentInfo();
 
 }
 else if (studentOption == '2')
 {
 if (announce == true)
 {
 //----pending to implement
 }
 else
 {
 cout << "Result is not announced yet! " << endl;
 }
 }
 else if (studentOption == '3')
 { //________logout option______
 break;
 }
 else
 {
 cout << "Wrong selection! Try again";
 }
 clearScreen();
 } //end of student menu while loop
 }
 else if (who == "EXIT")
 {
 cout << "choose correct option" << endl;
 }
 else
 {
 cout << "You entered wrong option " << endl;
 }
 clearScreen();
 } //end of while
} //end of main function
//__________________________ Function definitions_____________
void mainHeader()
{
 cout << "----------------------------------------------" << endl;
 cout << "--- University Admission Management System ---" << endl;
 cout << "----------------------------------------------" << endl;
}
string loginMenu()
{ //________Get user credentials and check whether user is present in
 mainHeader();
 string user2 , password;
 cout<<"enter the name";
 cin>>user2;
 cout<<"enter the password";
 cin>>password;
 for (int x = 0  ; x<userCount ; x++ )
 {
   if (user2 == usernameA[x] && password == passwordsA[x])
   {
      loginusername = usernameA[x];
       return rolesA[x];
   }
 }
 loginusername = " ";
 return "wrong";
 
}
int seatManagementMenu()
{ //________Discipline with capacity of student. this data should
int seats[] = {0,0,0};
 mainHeader();
 cout << "Seat Management Menu > " << endl;
 cout << "1- Edit CS Capacity " << endl;
 cout << "2- Edit CE Capacity " << endl;
 cout << "3- Edit EE Capacity " << endl;
 cout << "4- View Seats Details " << endl;
 cout << "5- Back " << endl;
 int option;
 cin>>option;
 return option;
}
void viewSeatsDetails()
{ //______View total seats according to discipline_________
for (int i = 0 ; i<3 ; i++)
{
  cout<<department[i]<<"seats are "<<seats[i]<<endl;
}
}
char adminMenu()
{ //_______Administrator level menu goes here__________
 mainHeader();
 char option;
 cout << "Admin Main Menu > " << endl;
 cout << "1- Add New Student " << endl;
 cout << "2- View All Students" << endl;
 cout << "3- Print the record in merit order " << endl;
 cout << "4- Generate Merit " << endl;
 cout << "5- Add Users " << endl;
 cout << "6- Seat Management " << endl;
 cout << "7- Announce Result " << endl;
 cout << "8- Logout " << endl;
 cout << " Choose Your Option : ";
 cin>>option;
 return option;
}
char studentMenu()
{ //_________Student or user menu, what user can choose_________ 
 mainHeader();
 cout << "Student Main Menu > " << endl;
 cout << "1- View Your Profile " << endl;
 cout << "2- Check Admission Status " << endl;
 cout << "3- Logout " << endl;
 cout << " Choose Your Option : ";
 char option;
 cin>>option;
 return option;
}
void clearScreen()
{ //____clear screen_____
 cout << "Press any key to continue " << endl;
 getch();
 system("CLS");
}
void addStudent()
{ //__________Get student data and their preferences__________addStudentIntoArray();
string name ;
float matric , fsc , ecat ;
string p1 , p2 , p3 ; 
  cout<<"Add student:";
  cin>>name;
  cout<<"enter the the matric marks";
  cin>> matric;
  cout<<"enter the fsc marks";
  cin>>fsc;
  cout<<"enter the ecat marks";
  cin>>ecat;
  subheader();
  cout<<"enter the preference 1 name";
  cin>>p1;
  cout<<"enter the preference 2 name";
  cin>>p2;
  cout<<"enter the preference 3 name";
  cin>>p3;
  count ++;
  addStudentIntoArray ( name,  matric,  fsc,  ecat,  p1,  p2,  p3);
}
void addStudentIntoArray(string name, float matric,  float fsc, float ecat, string p1, string p2, string p3)
{ //______Store student data into array____each time addStudent() function is called. it will store into global array
  student_name[count] = name;
  student_matric[count] = matric;
  student_fsc[count]= fsc;
  student_ecat[count] = ecat;
  student_pref1[count] = p1;
  student_pref2[count] = p2;
  student_pref3[count]  = p3;
}
void viewAllStudents()
{ //_______Retrieve student data and show on screen_______
for (int i = 0 ; i<count ; i++)
{
  cout<<student_name[i]<<"\t"<<student_matric[i]<<"\t"<<student_fsc[i]<<"\t"<<student_ecat[i]<<"\t"<< student_pref1[i]<<"\t"<< student_pref2[i]<<"\t"<< student_pref3[i]<<endl;
}
}
void subheader()
{ //________header for preference______
 cout << " Enter the Name for Preferences " << endl;
 cout << "********************************************" << endl;
 cout << "Choose between these disciplines " << endl;
 cout << "1- CS for Compter Science" << endl;
 cout << "2- CE for Compter Engineering" << endl;
 cout << "3- EE for Electrical Engineering" << endl;
 cout << "********************************************" << endl;
}
void addUser(string name, string pass, string role)
{ //______Add user, only admin can add_________
usernameA[userCount] = name;
passwordsA[userCount] = pass;
rolesA[userCount] = role;
userCount ++;

}
float aggrigate()
{ //_____________calculate aggrigate_______________
for( int i = 0 ; i<count ; i++)
{
   aggr[i] = ((student_matric[i] / 1100.0) * 0.20) + ((student_fsc[i] / 1100.0) * 0.20) + ((student_ecat[i] / 400.0) * 0.60);
    aggr2[i] = ((student_matric[i] / 1100.0) * 0.20) + ((student_fsc[i] / 1100.0) * 0.20) + ((student_ecat[i] / 400.0) * 0.60);
}
}
int   print_Recd()
{ //_____________calculate & sort in merit order_________

for (int i = 0 ; i<count ; i++)
{
  float large = aggr2[0];
  if (aggr2 [i] > large )
  {
    large = aggr2[i];
    aggr2[i] = -1;
     idx1 = i;
    
  }
}
return idx1;
}
int  generate_Mlist()
{ //_________________Generate merit according to discipline a student get admit____________
for (int i = 0 ; i<count ; i++)
{
  float large = aggr2[0];
  if (aggr2 [i] > large )
  {
    large = aggr2[i];
    aggr2[i] = -1;
     idx2 = i;
    
  }
}
return idx2;
}
int studentInfo()
{ //____________Student as user info__________
if (loginusername != " ")
{
  for(int i = 0 ; i < count ; i++)
  {
    if (student_name[i] == loginusername)
    {
     cout<<student_name[i]<<"\t"<<student_matric[i]<<"\t"<<student_fsc[i]<<"\t"<<student_ecat[i]<<"\t"<< student_pref1[i]<<"\t"<< student_pref2[i]<<"\t"<< student_pref3[i]<<endl; 
    }
  }
}

}