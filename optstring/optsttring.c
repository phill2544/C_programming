#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
void optstring(int number){
    int count=0,i=0,sum[5],sum1=0,limit,value=0,length,round=0,countloop=0,size=0,lengthget,total=0;
    char symbol[127],input[127];
    float totalsum[100],decimal;
    printf("Enter the symbol of math:");
    for(count=0;count<number;count++){
        symbol[count]=getche();//keep symbol
    }
    printf("\nEnter number\n=");
    scanf("%s",&input);//input is ogrkljg;r'423
    length=strlen(input);
    printf("\nEnter number of limit\n=");
    scanf("%d",&limit);//limit is limit
    if(limit>=9&&limit<=999){}
    else
        return 0;
  for(count=0,round=0;count<=length;count++){
          sum[0]=input[count]-48;//change number ascii
        if(sum[0]>=0&&sum[0]<=9){
                sum1=(sum1*10)+sum[0];//check
                if(sum1<=limit){//if less
               totalsum[i]=sum1;
                }
                else{//if over
                   i++;
                   sum1=sum[0];
                   totalsum[i]=sum1;
                }
            }
  }
   lengthget=strlen(symbol)-1;//check length of symbol
   for(count=0,countloop=0,round=0;count<i;count++,round++){//take symbol to calculate by loop of length's symbol
    if(symbol[round]=='+')
      totalsum[countloop]+=totalsum[count+1];
    else if(symbol[round]=='-')
       totalsum[countloop]-=totalsum[count+1];
    else if(symbol[round]=='*')
       totalsum[countloop]*=totalsum[count+1];
    else if(symbol[round]=='/'){
      totalsum[countloop]/=totalsum[count+1];
      totalsum[countloop]=ceil(totalsum[countloop]);
    }
    else if(symbol[round]=='%')
       totalsum[countloop]=fmod(totalsum[countloop],totalsum[count+1]);//fmod is mod of float by math.h
    if(round==lengthget)//reset value of round
        round=-1;
   }
   if(totalsum[countloop]<0){
    printf("IMPOSSIBLE");
   }else{
  printf("Answer is %f",totalsum[countloop]);
   }
}

int main()
{
    int number;
    printf("Enter the number of math :");
    scanf("%d",&number);
    if(number<=1000)
    optstring(number);
    else
        printf("END PROGRAM");
    return 0;
}
