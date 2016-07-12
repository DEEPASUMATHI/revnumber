#include<stdio.h>
int main(){
long int n;
int r;
scanf("%ld",&n);
while(n>0)
r=n%10;
printf("%d",r);
return 0;
}
