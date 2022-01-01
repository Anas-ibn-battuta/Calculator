#include<stdio.h>
/*the main function */
int main() {
   //variable declaration
   char o ;
   float num1, num2;
   printf("Select an operator either +,-,* or / \n");
   scanf("%c",&o);
   printf("Enter Number1 : ");
   scanf("%f",&num1);
   printf("Enter Number2 : ");
   scanf("%f",&num2);
   switch(o){
   //addition statement
   case'+':printf("The addition result is : %.1f+%.1f=%.1f\n",num1,num2,num1+num2);break;
   //subtraction statement
   case'-':printf("The subtraction result is: %.1f-%.1f=%.1f\n",num1,num2,num1-num2);break;
   //multiplication statement
   case'*':printf("The multiplication result is: %.1f*%.1f=%.1f\n",num1,num2,num1*num2);break;
   //division statement
   case'/':printf("The division result is: %.1f/%.1f=%.2f\n",num1,num2,num1/num2);break;
   default:printf("Error!! operator is not available");break;
   }
   //Amal Kalaepeh Calculator :)
}
