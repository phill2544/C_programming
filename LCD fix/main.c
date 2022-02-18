#include <stdio.h>
#include <stdlib.h>
void blank(value){//ฟังก์ชั่นนี้ เอาไว้ทำช่องว่าง
     int blank;
        for(blank=0;blank<=value;blank++){
            printf(" ");
                }
}
int main()
{   int countvalue,value,length,count,countline;//coutvalue=ตัวทำขีด ,value=ป้อนค่าขนาดขีด,count=เป็นตัวนับตัวอักษร,countline=นับเส้นของเลช ที่มีทั้งหมด5ส่วน
    char number[50];
    printf("Enter the value :");
    scanf("%d",&value);
    printf("Enter number :");
    scanf("%s",number);
    length=strlen(number);
    if(value>0){
    for(countline=0;countline<5;countline++){//countline is ตัวที่เป็นบรรทัด
            for(count=0;count<length;count++){
            if(countline==0){
            printf(" ");
            for(countvalue=0;countvalue<value;countvalue++){
           if(number[count]=='0'||number[count]=='2'||number[count]=='3'||number[count]=='5'||number[count]=='6'||number[count]=='7'||number[count]=='8'||number[count]=='9'){
                printf("-");
           }
           else if(number[count]=='1'||number[count]=='4'){
                printf(" ");
           }
            }
            printf(" ");
             }
            if(countline==1){
                for(countvalue=0;countvalue<value;countvalue++){
                for(count=0;count<length;count++){
             if(number[count]=='1'||number[count]=='2'||number[count]=='3'||number[count]=='7'){
                 blank(value);
                 printf("|");
           }
             else if(number[count]=='5'||number[count]=='6'){
                printf("|");
                 blank(value);

             }
             else if(number[count]=='4'||number[count]=='8'||number[count]=='9'||number[count]=='0'){
                printf("|");
                blank(value-1);
                  printf("|");
             }
            }
            printf("\n");
                }
            }
            if(countline==2){
               printf(" ");
                  for(countvalue=0;countvalue<value;countvalue++){
                if(number[count]=='4'||number[count]=='2'||number[count]=='3'||number[count]=='5'||number[count]=='6'||number[count]=='8'||number[count]=='9'){
                    printf("-");
                }
                else if(number[count]=='1'||number[count]=='7'||number[count]=='0'){
                    printf(" ");
                }
            }
            printf(" ");
            }
            if(countline==3){
                       for(countvalue=0;countvalue<value;countvalue++){
                              for(count=0;count<length;count++){
                if(number[count]=='1'||number[count]=='3'||number[count]=='4'||number[count]=='5'||number[count]=='7'||number[count]=='9'){
                    blank(value);
                    printf("|");
                }
                else if(number[count]=='2'){
                    printf("|");
                    blank(value);
                }
                else if(number[count]=='6'||number[count]=='8'||number[count]=='0'){
                    printf("|");
                    blank(value-1);
                    printf("|");
                }
                    }
                printf("\n");
                    }
            }
            if(countline==4){
                    printf(" ");
                      for(countvalue=0;countvalue<value;countvalue++){
                if(number[count]=='0'||number[count]=='2'||number[count]=='3'||number[count]=='5'||number[count]=='6'||number[count]=='8'||number[count]=='9'){
                    printf("-");
                }
                else if(number[count]=='1'||number[count]=='4'||number[count]=='7'){
                    printf(" ");
                }
                      }
            printf(" ");
            }
            }
            if(countline==2||countline==0){
        printf("\n");
            }
       }
    return main();
    }
}
