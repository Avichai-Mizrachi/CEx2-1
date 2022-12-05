#include <stdio.h>
#include "my_mat.h"

#define Ten 10
int a[Ten][Ten];
int minimum(int a, int b);
void distance();

void func1() {
    for(int i = 0;i < Ten;i++){
        for(int j = 0;j < Ten;j++){
            scanf("%d", &a[i][j]);
        }
    }
    distance();
}

void func2(){
    int b = 0, c = 0;
    scanf("%d%d", &b, &c);
    if (a[b][c] != 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

void func3()
{
    int b = 0, c = 0;
    scanf("%d%d", &b, &c);
    if (a[b][c] == 0 || b == c)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", a[b][c]);
    }
}

void distance()
{
    for (int k = 0; k < Ten; k++)
    {
        for (int i = 0; i < Ten; i++)
        {
            for (int j = 0; j < Ten; j++)
            {
                if (i == j)
                {
                    a[i][i] = 0;
                }
                else if (i == k || j == k)
                {
                    a[i][j] = a[i][j];
                }
                else
                {
                    int x = a[i][k] + a[k][j];
                    if (a[i][k] == 0 || a[k][j] == 0){
                        x = 0;
                    }
                    a[i][j] = minimum(a[i][j], x);
                }
            }
        }
    }
}


int minimum(int a, int b)
{
    if (a == 0){
        return b;
    }
    if (b == 0){
        return a;
    }
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
