#include<reg51.h>                                       
sbit a= P3^0;                                             
sbit x= P3^1;  
sbit y= P3^2;  
sbit z= P3^3;  
void main()  
{  
unsigned char m[10]={0?40,0xF9,0?24,0?30,0?19,0?12,0?02,0xF8,0xE00,0?10};  
unsigned int i,j;  
a=x=y=z=1;  
while(1)  
{  
for(i=0;i<10;i++)  
{  
P2=m[i];  
for(j=0;j<60000;j++);  
}  
}  
}  