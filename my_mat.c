#include <stdio.h>
#include "my_mat.h"

void foo1(int mat[10][10])
{
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mat[i][j] = 0;
        }

    }
    int val;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &val);
            mat[i][j] = val;
        }

    }
}

int foo2(int mat[10][10])
{
    
    int cul;
    int row;
    scanf("%d", &cul);
    scanf("%d", &row);

    int dist[10][10], i, j, k;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            dist[i][j] = mat[i][j];
        }
    }

    for (k = 0; k < 10; k++)
    {
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                if (dist[i][k] == 0 || dist[k][j] == 0)
                {
                    continue;
                }
                if (dist[i][j] == 0 && i != j)
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
                else if (dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    return dist[cul][row];
}

int foo3(int mat[10][10])
{
    int cul;
    int row;
    scanf("%d", &cul);
    scanf("%d", &row);

    int dist[10][10], i, j, k;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            dist[i][j] = mat[i][j];
        }
    }

    for (k = 0; k < 10; k++)
    {
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                if (dist[i][k] == 0 || dist[k][j] == 0)
                {
                    continue;
                }
                if (dist[i][j] == 0 && i != j)
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }

                else if (dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    return dist[cul][row];
}
