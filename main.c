#include <stdio.h>
 
int main () {

   /* local variable definition */
int level;
char empname[100];
int empid;
  float basic, gross, da, hra;
  int exp,phn;
  char G;
  printf("---SRM EMPLOYEE DETAILS---\n");
  printf("Enter job level:");
  scanf("%d",&level);

   switch(level) {
      case 1:
                  printf("Enter Empname:");
         scanf("%s",&empname);
         printf("Emp Id is:");
          scanf("%d",&empid);  
        printf("Enter Experience:");
        scanf("%d",&exp);
        printf("Enter phone number:");
        scanf("%d",&phn);
        printf("Enter Gender:");
        scanf("%s",&G);
        printf("Enter basic salary of an employee: ");
        scanf("%f", &basic);
           if(basic <= 10000)
             {
                da  = basic * 0.8;
                hra = basic * 0.2;
             }
           else if(basic <= 20000)
            {
               da  = basic * 0.9;
               hra = basic * 0.25;
            }
           else
           {
              da  = basic * 0.95;
              hra = basic * 0.3;
           }
          gross = basic + hra + da;

        break;
      case 2:
         printf("Enter empname:");
         scanf("%s",&empname);
         printf("Emp Id is:");
          scanf("%d",&empid);  
        printf("Enter Experience:");
        scanf("%d",&exp);
        printf("Enter phone number:");
        scanf("%d",&phn);
        printf("Enter Gender:");
        scanf("%s",&G);
        printf("Enter basic salary of an employee:\n ");
       
        scanf("%f", &basic);
           if(basic <= 10000)
             {
                da  = basic * 0.8;
                hra = basic * 0.2;
             }
           else if(basic <= 20000)
            {
               da  = basic * 0.9;
               hra = basic * 0.25;
            }
           else
           {
              da  = basic * 0.95;
              hra = basic * 0.3;
           }
          gross = basic + hra + da;

        break;
      case 3:
         printf("Enter empname:");
         scanf("%s",&empname);
         printf("Emp Id is:");
         scanf("%d",&empid); 
         printf("Enter Experience:");
         scanf("%d",&exp);
         printf("Enter phone number:");
         scanf("%d",&phn);
         printf("Enter Gender:");
         scanf("%s",&G);
         printf("Enter basic salary of an employee: ");
         scanf("%f", &basic);
           if(basic <= 10000)
             {
                da  = basic * 0.8;
                hra = basic * 0.2;
             }
           else if(basic <= 20000)
            {
               da  = basic * 0.9;
               hra = basic * 0.25;
            }
           else
           {
              da  = basic * 0.95;
              hra = basic * 0.3;
           }
          gross = basic + hra + da;
         break;
      case 4:
         printf("Enter empname:");
         scanf("%s",&empname);
         printf("Emp Id is:");
          scanf("%d",&empid);  
        printf("Enter Experience:");
        scanf("%d",&exp);
        printf("Enter phone number:");
        scanf("%d",&phn);
        printf("Enter Gender:");
        scanf("%s",&G);
        printf("Enter basic salary of an employee: ");
        scanf("%f",&basic);
        if(basic <= 10000)
             {
                da  = basic * 0.8;
                hra = basic * 0.2;
             }
           else if(basic <= 20000)
            {
               da  = basic * 0.9;
               hra = basic * 0.25;
            }
           else
           {
              da  = basic * 0.95;
              hra = basic * 0.3;
           }
          gross = basic + hra + da;
         break;
      case 5:
         printf("Enter empname:");
         scanf("%s",&empname);
         printf("Emp Id is:");
          scanf("%d",&empid);  
        printf("Enter Experience:");
        scanf("%d",&exp);
        printf("Enter phone number:");
        scanf("%d",&phn);
        printf("Enter Gender:");
        scanf("%s",&G);
         printf("Enter basic salary of an employee: ");
         scanf("%f",&basic);
           if(basic <= 10000)
             {
                da  = basic * 0.8;
                hra = basic * 0.2;
             }
           else if(basic <= 20000)
            {
               da  = basic * 0.9;
               hra = basic * 0.25;
            }
           else
             
           {
              da  = basic * 0.95;
              hra = basic * 0.3;
           }
          gross = basic + hra + da;
         break;
      default :
         printf("Invalid Job level\n" );
   }
  
   printf("Job level is %d \n",level);
   printf("Empname is %s \n",empname );
   printf("EmpId is %d \n",empid);
   printf("Experience is %d \n",exp);
   printf("Gender is %c \n",G);
   printf("GROSS SALARY OF EMPLOYEE = %.2f \n", gross); 
  
       if(level==1){
printf("The role of the employee is:OPERATIONS EXECUTIVE\n");
       }
  if(level==2){
    printf("The role of the employee is:SYSTEM ENGINEER\n");
     }
  if(level==3){
    printf("The role of the employee is:SENIOR SYSTEM ENGINEER\n");
    } 
   if(level==4){
    printf("The role of the employee is:TECHNOLOGY ANALYST\n");
    } 
  if(level==5)
  {
    printf("The role of the employee is:PROJECT MANAGER\n");
    } 
if(exp==1)
{
gross=gross+1000;
  printf("Incremented salary is %.2f:",gross);
}
  if(exp==2)
{
gross=gross+2000;
  printf("Incremented salary is %.2f:",gross);
}
  if(exp>=3)
{
gross=gross+5000;
  printf("Incremented salary is %.2f:",gross);
}
  if(exp>=10 && exp<=20)
  {
gross=gross+10000;
  printf("Incremented salary is %.2f:",gross);
}
}