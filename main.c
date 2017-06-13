//
//  main.c
//  sort
//
//  Created by 20161104612 on 2017/6/12.
//  Copyright © 2017年 20161104612. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
    FILE *fw;
    FILE *fp;
    fw=fopen("/Users/a20161104612/Desktop/20161104612/sort/input.txt","r+");
    fp=fopen("/Users/a20161104612/Desktop/20161104612/sort/output.txt","w");
    int a[MAX];
    int i,j,t;
    while(a[i]!='0')
    {
       
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
        printf("%d",a[i]);
        fprintf(fp,"%d",a[i]);
    }
    }
    
    
    fclose(fw);
    fclose(fp);
    
    
    printf("\n");
    return 0;
}

