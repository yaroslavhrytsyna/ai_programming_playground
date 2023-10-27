
#include <cmath>
#include <cstdio> 

int main()
{
    char name [50];
    double principal;
    double rate; 
    int time;
    int n; 
    double a;
    double q;

    printf("Enter your name");
    scanf("%s",name);
    printf("Enter your principal");
    scanf("%lf",&principal);
    printf("Enter rate:");
    scanf("%lf",&rate );
    printf("Enter years:");
    scanf("%d",&time);
    printf("Enter period:");
    scanf("%d",&n);

    rate  /=(double) 100;
    a=principal*pow(1+(rate/n),n*time);
    q=a-principal;
    printf("Hello %s",name);
    printf("\nThe compound interest for a principal of %.2f at a rate of %.2f%% compounded %d times a year for %d years is %.2f\n",principal,rate*100,n,time,q);
    printf("Total is: %.2f",a);

    return 0;
}