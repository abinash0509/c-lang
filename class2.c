//1.wap to check weather a given no is positive or non non-positive
#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if (i<=0)  //i>0 --positive
    printf("the no %d is non-positive",i);
    else
    printf("the no is +ve");
    return 0;
}
//2.what is the out put of this problem
#include<stdio.h>
int main()
{
    if(5>4)
    printf("Hello");
    printf("Welcome");
    else
    printf("Bye");
    return 0;
}
//3.wap what is the output
#include<stdio.h>
int main()
{
    if(3!=2);
    //printf("Hello");
    else
    printf("Bye");
    return 0;
}
//4.wap to check weather a given no is odd or even
#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if(i%2==0)  //i%2  every non zero is true and zero is false
                //without using % operator (i/2*2==i) 
                //using bitwise operator(i&1)
    printf("even %d",i);
    else
    printf("%d is odd",i);
    return 0;
}
//5.add two no without using + operator
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a-(-b);
    printf("%d is sum of a and b",c);
    return 0;
}
//6.condinational operator
#include<stdio.h>
int main()
{
    int x=24;
    if(x>4?printf("A"):printf("B"));
    return 0;
}