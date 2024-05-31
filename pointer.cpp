#include<bits/stdc++.h>

using namespace std;

int main(){

    int x = 10;
    int *ptr = &x;
    int **ptr1 = &ptr;
    
    /*   ptr1 holds the address of ptr
      *ptr1 = *(address of ptr) = value stored in ptr = address of x
       **ptr1 = *(address of x) = value of variable x
    */
   cout<<*ptr<<" "<<**ptr1<<endl;
   return 0;
}