#include<iostream>
using namespace std;

int prodDigits(int n)
{
    if(n == 0)
    {
       return 0;
   }
   int p = 1;
   while(n != 0)
   {
      p = p * (n % 10);
      n = n / 10;
   }
   
   return p;
}