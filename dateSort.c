#include<stdio.h>
#include<stdlib.h>
struct date
{
 int dd,mm,yyyy;
};
int check(struct date a,struct date b)
{
 if(a.yyyy<b.yyyy)
   return 0;
 else if(a.yyyy==b.yyyy)
 {
  if(a.mm<b.mm) return 0;
  else if(a.mm==b.mm){
   if(a.dd<=b.dd) return 0;
   else return 1;
  }
  else return 1;
 }
 else return 1;
}
int main()
{
 int n,i,j;
 printf("Enter number of dates");
 scanf("%d",&n);printf("Enter %d dates\nDD MM YYYY\n",n);
 struct date d[n],temp;
 for(i=0;i<n;i++)
 {
  scanf("%d",&d[i].dd);
  scanf("%d",&d[i].mm);
  scanf("%d",&d[i].yyyy);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-i-1;j++)
  {
   if(check(d[j],d[j+1]))
   {
    temp=d[j];d[j]=d[j+1];d[j+1]=temp;
   }
  }
 }
 printf("\n sorted order of given dates is\nDD MM YYYY\n");
 for(i=0;i<n;i++)
  printf("%d/%d/%d\n",d[i].dd,d[i].mm,d[i].yyyy);
}
