#include<iostream>

int main()
{
    int ni,ne,i=0;
    float int_p=18,ext_p=12,cost=0,temp;
    scanf("%d %d",&ni,&ne);
    if(ni<0 || ne<0 )
    {
        printf("INVALID INPUT");
    }
    else if(ni==0 && ne==0)
    {
        printf("Total estimated Cost : 0.0");
    }
    else
    {
        for(i=0;i<ni;i++)
        {
            scanf("%f",&temp);
            cost+= int_p*temp;
        }
        for(i=0;i<ne;i++)
        {
            scanf("%f",&temp);
            cost+= ext_p*temp;
        }
        printf("Total estimated Cost : %.1f",cost);
    }
    return 0;
}