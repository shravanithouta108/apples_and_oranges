#include<stdio.h>
int main(){
int s,t,a,b,m,n,i,ac=0,oc=0;
scanf("%d%d",&s,&t);
scanf("%d%d",&a,&b);
scanf("%d%d",&m,&n);
int apples[m],orange[n];
for(i=0;i<m;i++)
{scanf("%d",&apples[i] );
}
for(i=0;i<n;i++)
{scanf("%d",&orange[i] );
}
for(i=0;i<m;i++)
{
int d=apples[i]+a;
if(d>=s && d<=10)
{ac++;
}
}
for(i=0;i<n;i++)
{
int d=orange[i]+b; 
if(d>=s && d<=10)
{oc++;
}
}
printf("%d\n%d",ac,oc);
return 0;
}
