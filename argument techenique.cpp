#include<stdio.h>
#include<conio.h>
void fun1();
void add(int x,int y);
int main()
{

 fun1();
}

void fun1()

{
  int a=2,b=3;
  
   add(a,b);
   
}
void add(int x,int y)
{
	int r;
	r=x+y;
	printf("%d",r);
}