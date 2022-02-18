#include <stdio.h>
int main(){
    unsigned long a,b,total=0,c,round=1,max=0;
    scanf("%d %d",&a,&b);
    if(b<=1000000){
    for(;a<=b;a++){
        c=a;
     while(c!=1){
        if(c!=1&&c%2==0){
      while(c!=1&&c%2==0){
            c/=2;
            round++;
      }
        }
        else{
       while(c!=1&&c%2==1) {
            c = (c*3)+1;
            round++;
      }
        }
     }
            if(round>max){
            max=round;
            }
              round=1;
              }
       }
     printf("\nMax Round is %d",max);
    return 0;
}
