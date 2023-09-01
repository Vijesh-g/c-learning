#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    scanf("%d",&a);
    int ar[a];
    for(int i=0; i<a; i++)
    {
        scanf("%d",&ar[i]);
    }
     int Esum=0,Osum=0;
     for(int i=0; i<a; i++)
     {
        if(ar[i]%2==0)
        {
            Esum+=ar[i];
        }
     
    else
    {
    Osum+=ar[i];
}
     }
     printf("%d",abs(Esum-Osum));
}