#include<stdio.h>
int main(){
    int math,evs,comp,dsa,eng,mgrade,egrade,cgrade,dgrade,engrade;
    printf("Enter the marks in the sequence :math,evs,comp,dsa,eng");
    scanf("%d\n%d\n%d\%d\n%d",&math,&evs,&comp,&dsa,&eng);
    mgrade=((math/10)+1)*4;
    egrade=((evs/10)+1)*2;
    cgrade=((comp/10)+1)*3;
    dgrade=((dsa/10)+1)*3;
    engrade=((eng/10)+1)*3;
    float avg=(float)(mgrade+egrade+cgrade+dgrade+engrade)/15;
    printf("Your SGPA id %f",avg);
}