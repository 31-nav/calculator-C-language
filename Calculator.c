// # calculator-C-language
// 🏆 Simple calculator by using if() condition 🏆
// write a program for calculator using while loop and if condition .

// program is incomplete yet .  
// Navneet 


#include<stdio.h>
int main()
{
  char a,s,d,m,value;
  int num1,num2,sum,mul,div,dif;
printf("Enter your choice \n \n a=add\n s=subtract\n m=multiply\n d=divide\n\n");
  scanf("%c",&value);
  if(value=='a')
  {
    printf("Enter First and second numbers \n");
    scanf("\n%d\n%d",&num1,&num2);
    sum=num1+num2;
    printf("Sum is %d \n",sum);
    

    }
  if(value=='s')
  {
    printf("Enter First and second numbers \n");
    scanf("\n%d\n%d",&num1,&num2);
    dif=num1-num2;
    printf("Difference is %d \n",dif);
  }
  if(value=='m')
  {
    printf("Enter First and second numbers \n");
    scanf("\n%d\n%d",&num1,&num2);
    mul=num1*num2;
    printf("Multiplication is %d \n",mul);
  }
  if(value=='d')
  {
    printf("Enter First and second numbers \n");
    scanf("\n%d\n%d",&num1,&num2);
    div=num1/num2;
    printf("Division is %d \n",div);
  }
  return 0;
  
} // end of main statement.
