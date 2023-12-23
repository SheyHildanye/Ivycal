#include<stdio.h>
int main(){
char name[20];
char operator;
float sum,diff,quot,prdt,num1,num2;
int numread;
K:printf("What is your name\n");
scanf("%s",&name);
printf("%s what operation do you want to perform['+','-','/','*']\n",&name);
scanf("%s",&operator);

L:printf("Enter first number\n");
scanf("%f",&num1);


printf("Enter second number\n");
scanf("%f",&num2);



float result;

switch(operator){
case '+':
    sum=num1+num2;
printf("The sum is %.2f\n",sum);
    break;
    case'-':
    diff=num1-num2;
printf("The diff is %.2f\n",diff);
    break;
    case'/':
    quot=num1/num2;
printf("The quot is %.2f\n",quot);

if(num2==0){
    printf("invalid\n");
goto L;
}
    break;
    case'*':
    prdt=num1*num2;
printf("The prdt is %.2f\n",prdt);
    break;
    return 0;

}

}
