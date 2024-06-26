#include <iostream>
using namespace std;
main()
{

 float matric,total_matric_no,inter,total_inter_no,ecat,total_ecat_no,matric_percentage,inter_percentage,ecat_percentage,total_uet_agrigate;

 cout<< "enter the matric no..";

 cin>>matric;

 cout<<"enter the inter no..";

 cin>>inter;

 cout<<"enter the ecat no..";

 cin>>ecat;

 cout<<"total no of matric";

 cin>>total_matric_no;

 cout<<"total inter no";

 cin>>total_inter_no;

 cout<<"total ecat no";

 cin>>total_ecat_no;

 matric_percentage=matric/total_matric_no*100*0.25;

 inter_percentage=inter/total_inter_no*100*0.45;

 ecat_percentage=ecat/total_ecat_no*100*0.30;

 total_uet_agrigate=matric_percentage+inter_percentage+ecat_percentage;

 cout<<"my total agrigate of uet is"<<total_uet_agrigate;


 }