//    1
//   123
//  12345
// 1234567


#include<stdio.h>
#include<conio.h>

  int main()
{
   int i,sp,j,ch=64;

  for(i=1;i<=4;i++)
 {
  for(sp=1;sp<=41-i;sp++)
 {
 	
   printf(" ");
   
 }
 for(j=1;j<=i*2-1;j++)
 {
   	
   printf("%c",j+64);
   
 }
    
   printf("\n");
 }
 getch();
}