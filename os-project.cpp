#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char pn[10][10],t[10];
int et[20],at[10],n,i,j,temp,p[10],st[10],ft[10],wt[10],ta[10];
int totwt=0,totta=0;
float awt,ata;
printf("Please Enter the Process:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter process name,arrivaltime,execution time & priority:");
scanf("%s%d%d%d",pn[i],&at[i],&et[i],&p[i]);
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
  	if(p[i]==p[j])
	{
	if(at[i]<at[j])
	{
		 temp=at[i];
		  at[i]=at[j];
	   	at[j]=temp;
		
	     temp=et[i];
        et[i]=et[j];
        et[j]=temp;	
 strcpy(t,pn[i]);
strcpy(pn[i],pn[j]);
strcpy(pn[j],t);
	}
	}  
if(p[i]<p[j])
{
temp=p[i];
p[i]=p[j];
p[j]=temp;
temp=at[i];
at[i]=at[j];
at[j]=temp;
temp=et[i];
et[i]=et[j];
et[j]=temp;
strcpy(t,pn[i]);
strcpy(pn[i],pn[j]);
strcpy(pn[j],t);
}
}

