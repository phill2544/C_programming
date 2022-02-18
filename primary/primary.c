#include <stdio.h>
int primary(int number1,int number2){
    int sum=0,multi1=0,multi2=0,carry=0,number3=0,number4=0;
    while(number1!=0||number2!=0){
        multi1+=number1%10;//เอาตัวสุดท้ายของnumber1มาเก็บไว้ที่ multi1//take the last value number1
        number1/=10;//เอาค่าสุดท้ายออก//change value
        multi2+=number2%10;//เอาตัวสุดท้ายของnumber2มาเก็บไว้ที่ multi2//take the last value from number2
        number2/=10;//เอาค่าสุดท้ายออก//change value
        sum=multi1+multi2;//เอาค่าสุดท้ายของทั้ง2ตัวมาบอกกัน//total
        number3+=multi1;//เอาค่าสุดท้ายมาาบอกกับ multi1//เปรียบเสมือนตัวทด
        number4+=multi2;//เอาค่าสุดท้ายมาาบอกกับ multi2//เปรียบเสมือนตัวทด
        if(sum>=10||number3>=10||number4>=10){//ถ้าเกิน10ก็มาเข้านี่
            carry++;//บอกจำนวนเลขทด
            number3=1;//ถ้าาเกิน10 ก็จะมาทดใขตัวนี้
            number4=1;//ถ้าาเกิน10 ก็จะมาทดใขตัวนี้
        }
        else{
            number3=0,number4=0;//ถ้าไม่มีเลขทด ก็ทำให้่ค่าตัวทดเป็น0
        }
        multi1=0,multi2=0;//เว็ตค่าตัวสุดท้ายใหม่
    }
    return carry;//นำค่ารีเทิร์นกลัับ
}
int main() {
	int number1,number2;
	int lengh1,lengh2;
	printf("Enter number1 :");
	scanf("%d",&number1);//รอรับเลชตัวแรก//input number1
	printf("Enter number2 :");
	scanf("%d",&number2);//รอรับเลขตัวที่2//input number2
    printf("carry operation is %d",primary(number1,number2));//รอค่าจากฟังก์ชั่น//wait the value from primary
	return 0;
}
