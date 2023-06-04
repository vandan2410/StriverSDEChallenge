#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
   int zero=0,one=0,two=n-1;
   while(one<=two)
   {
      if(arr[one]==0)
      {
         swap(arr[zero++],arr[one++]);
      }
      else if(arr[one]==1)
      {
         one++;
      }
      else
      {
         swap(arr[one],arr[two--]);
      }
   }
}