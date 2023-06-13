#include<bits/stdc++.h>
using namespace std;
int findUnique(int *arr, int size)
{
    int xr=0;
    for(int i=0;i<size;i++)
    {
        xr=xr^arr[i];
    }
    return xr;
}