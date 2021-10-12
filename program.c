#include<conio.h>
#include<stdio.h>
main()
{ 
char check;

int a,b,c;
float m,cm;




 
 

/* this code has been writeen by utkarsh */
printf("staring......\n");
printf("compiling the code..........\n");
printf("my master  is utkarsh\n");

printf("  - to  add type a\n");

printf("  - to  subtract type s.\n");
printf("  - to multiply type m.\n");
printf("  - to divide type d.\n");

printf("  - to print table of particular number type t\n");


printf("  note- to use action if you had to CONVERT meter to centi meter then type b.\n");
printf("note that no typing mistake will accepted by machine");

printf(" machine started.....................");

scanf("%c",&check);
if (check=='a')

  

{
 
printf("enter number  to add.\n ");
scanf("%d%d", &a,&b);
 c=a+b;
 printf("sum of the numbers =%d\n",c);



}
 else if (check=='s')
 { 
printf("enter to numbers to  subtract.\n");
scanf("%d%d",&a,&b);
if (a>b)
{ 
c=a-b;
}
else 
{ 
c=b-a;    

 printf( "differnece between number is=%d\n",c);
 }
 }
 else if (check=='m')
 { 
   printf("enter the nukmber to print product of them.\n ");
scanf("%d%d",&a,&b);
c=a*b;
 printf("product of numbeers is =%d\n",c);
 }
 else if (check=='d')
 { 
  printf("enter to number to divide \n");
scanf("%d%d",&a,&b);
c=a/b;


 printf("answer is =%d\n",c);
c=a%b;
 printf(" remainder is =%d\n",c);
 }     
 else if (check=='e')


 {
printf("Extractingcode.........\ncode extracted..\n to see file type .slash <symbol here >code.txt after stoping this program. dont give space between . and slash  although the code will not work ");







 }
 else if  (check=='t')
{

printf("entur number to print table");
scanf("%d",&a);
for(c=1;c<=10;c++)
{
b=a*c;
printf("   %d\n",b);

}
}
else if(check=='m' )
{
 printf(" enter value to convert meter to centimeter");
 scanf("%f",&m);
 cm=m*100;
  printf("the %fm is %fin cm",m,cm);















}
printf("the machine has been shutdwon");
}
 
    

 
 






    

 
 








