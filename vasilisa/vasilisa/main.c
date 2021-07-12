//
//  main.c
//  vasilisa
//
//  Created by Жанат on 19.11.14.
//  Copyright (c) 2014 KBTU. All rights reserved.
//

#include <stdio.h>
long c,N;
long A[N];
long P(long l, long r)
{
    long x=A[l],
    i=l-1,
    j=r+1,
    t;
    while(1)
    {
        do{--j; ++c;}
        while(A[j]>x);
        do{++i; ++c;}
        while(A[i]<x);
        if(i<j)
        {
            t=A[i];
            A[i]=A[j];
            A[j]=t;
        }
        else return j;
    }
}

void Q(long l, long r)
{
    long n;
    if(l<r)
    {
        n=P(l,r);
        Q(l,n);
        Q(n+1,r);
    }
}

int main(void)
{
    c=0;
    for(long i=0; i<N; ++i)
        scanf("%ld", &A[i]);
    Q(0,N-1);
    if(c==(N*N+3*N-4)/2)
        printf
        ("Василиса Прекрасная");
    else printf
        ("Кощей Бессмертный");
    return 0;
}
