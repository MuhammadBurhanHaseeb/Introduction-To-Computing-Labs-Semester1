#include <iostream>
#include <fstream>
using namespace std;
string nameA[10];
string marksA[10];
int matric_Count=0;
int name_Count=0;
int FSC_Count=0;
string FmarksA[10];
string EmarksA[10];
int ECAT_Count=0;
string line;
int count =1;
int count2=0;
main(){
    fstream file;
    file.open("student_data_comma.txt",ios::in);
    while(true){
        file>>line;
     if(line == ","){
        continue;
     }
     if(file.eof()){
         break;
     }
     if(count ==1){
         nameA[name_Count] = line;
         name_Count++;
         count++;
     }
     if(count ==2){
       marksA[matric_Count] = line;
       matric_Count++;
       count++;
     }
     if(count ==3){
       FmarksA[FSC_Count] = line;
       FSC_Count++;
       count++;
     }
     if(count ==4){
       EmarksA[ECAT_Count] = line;
       ECAT_Count++;
       count++;
       count =1;
       count2++;
     }
     


    }
    for(int i=0; i<count2; i++){
        cout<<nameA[i]<<" "<<marksA[i]<<" "<<FmarksA[i]<<" "<<EmarksA[i]<<endl;
    }
}