//
//  main.c
//  sort
//
//  Created by 20161104612 on 2017/6/12.
//  Copyright © 2017年 20161104612. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[10];
    int i,j,t;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<9;j++)
    {
        for(i=0;i<=8-j;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
