#include <stdio.h>
#include <string.h>
int main() {
	int lengh=0,i=1,x=0,b,count,c,round=0;
    unsigned long long int all=0.0,total=0.0,total1=0.0;
	char number[50];
	scanf("%s",&number);//input
 for(round;round<=1000;round++){//the round
	lengh=strlen(number)-1;//strlen is count the charecter
	b=lengh;//เก็บค่าความยาวlength
	c=lengh;
 	for(count=0;count<=lengh;count++){//วนตัวอักษร
		for(x=0;x<b;x++){
			i*=10;//เป็นตัวคูนของnumber
		}
		b--;
		total += (number[count]-48)*i;//ทำค่าของเลขที่ยังไม่กลับเป็นจำนวนเต็ม
       i=1;
	 }
	for(count=0;lengh>=count;lengh--){//ลูปของตัวที่กลับเลช
		for(x=0;x<c;x++){
			i*=10;
		}
		c--;
		total1 += (number[lengh]-48)*i;//ทำค่าของเลขที่กลับแล้วเป็นจำนวนเต็ม
       i=1;
	}
	sprintf(number,"%lld",all=total+total1);//เอาค่าาเลขที่กลับแล้วและยังไม่กลับ มารวมกัน และเแปลงไปเก็บไว้ที่char number
	if(total-total1==0){//ถ้า ลบกันแล้วได้ 0 หรือ มีค่าเท่ากันทั้ง2ค่า ให้จบการทำงาน
	     printf("The last number is %lld\n",total);
	     printf("Round is %d",round);
	     	return 0;
		}
		else if(all>=4294967295||round>=1000){//และถ้าค่าที่รวมกันเกิน4294967295 หรือรอบเกิน 1000
  		 printf("\nNot palindrome found");
  		 return 0;
		}
	total=0,total1=0;//และเช็คึ่าเป็น 0 ใหม่
   }
	return 0;
}
