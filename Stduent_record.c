//    Topic   :- Student data recored save and Edit the student data Without Pointers
//    Author  :- Mr.Denish Ribadiya
//    Company :- Embrill Pvt. Ltd.
//    status  :- Varified.

#include<stdio.h>

struct student{
   int id;
   char name[50];
   int age;

};


int main()
{

   int i=0;
   int num_of_std=0;

   printf("Enter the how many total student data are you store:\n");
   scanf("%d",&num_of_std);

   struct student arr[num_of_std];

   //Take input from user
   for(i=0;i<num_of_std;i++)
   {
      printf("enter the %d student id\n",i);
      scanf("%d",&arr[i].id);


      printf("enter the %d  student name:\n",i);
      scanf("%s",arr[i].name);


      printf("enter the  %d student age:\n",i);
      scanf("%d",&arr[i].age);

      printf("\n\n");
   }


   printf("All Strudent List\n ");

   for(i=0;i<num_of_std;i++){
      printf("Name : %s,             age : %d          ,Age : %d\n",arr[i].name, arr[i].age, arr[i].id );
   }

   int yes_no_edit=0;
 edit:
   printf("any student data need to update press 1 other wise 0 :\n");
   scanf("%d", &yes_no_edit);

   if(yes_no_edit !=0 && yes_no_edit !=1){
      printf("\nplz enter valid number 0 or 1\n\n");

      printf("any student data need to update press 1 other wise 0 :\n");
      scanf("%d", &yes_no_edit);

   }

   if(yes_no_edit ==1){

      int std_num=0;
      printf("which number of the student edit :\n");
      scanf("%d",&std_num);


       printf("enter the modifyed name :\n");
       scanf("%s",arr[std_num].name);

       printf("enter the new age of the student :\n");
       scanf("%d",&arr[std_num].age);

       printf("enter the new id of the student :\n");
       scanf("%d",&arr[std_num].id);


       printf("\n\n Modiyed Student Record :\n");
       for(i=0;i<num_of_std;i++){
          printf("Name : %s,             age : %d          ,Age : %d\n",arr[i].name, arr[i].age, arr[i].id );
       }


      goto edit;

   }

    printf("\n!!!!!!!Thank You!!!!!!!!!\n");

   return 0;
}
