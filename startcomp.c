#include<stdio.h>
#include<string.h>
int main(){
char a[100],a1[]="START38";
int t,s,c=0,c1=0;
scanf("%d",&t);
while(t--){
    scanf("%d",&s);
    while (s--)
    {
    scanf("%s",a);
    if (strcmp(a,a1)==0)
    {
        c++;
    }
    else{
        c1++;
    }
    
    }
    printf("%d ",c);
printf("%d\n",c1);
c=0;
c1=0;
    
}


}








