#include<stdio.h>
#include<string.h>

struct st
{
    int id,mark[6];
    char name[15],dob[20];
}s;

void main()
{
    int i, j;
 char sub[6][20]={"marathi","hin","eng","his","math","sci"};   
 printf("id\tname\tdob\n");
 scanf("%d\t%s\t%s\n",&s.id,s.name,s.dob);
 //clrscr();
 
 for(j=0;j<20;j++)
 {
     printf("%s",sub[j]);
     scanf("%d\n",&s.mark[i]);
 }

 puts("board of secondary education");
 puts("___________________________");
    
    printf("%d\t%s\t%s\n",s.id,s.name,s.dob);
for(i=0;i<6;i++)
{
    printf("%s\t%d",sub[i],s.mark[i]);
    if(s.mark[i]>=35)printf("pass");
    else printf("fail");
}
    //return 0;
}
