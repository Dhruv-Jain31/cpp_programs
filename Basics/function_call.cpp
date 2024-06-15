#include <bits/stdc++.h>

using namespace std;

//call by value
/*Here, 2 new variables x and y gets created. So when we change the value of x and y, 
it does not affect a and b.*/
void f1(int x, int y) {
  x = 10;
  y = 20;
}

// call by pointer
/*Here, we are passing address of a and b. So x holds address of a and y holds address of b.
Now we are directly making the change in the address, so value of a and b are updated.*/
void f2(int *x, int *y) {
  *x = 10;
  *y = 20;
}

//call by reference
/*& means creating a reference which is an alias / alternate name for the variable. 
Here x and y just becomes alternate names for the variables a and b respectively. 
They don’t have any memory allocation of their own. So setting x = 10 is equivalent to writing a = 10.*/
void f3(int &x, int &y) {
  x = 10;
  y = 20;
}

int main(){
    int a = 30;
    int b = 40;

    f1(a,b);
    cout<<"value of a&b after call by value is: " <<a <<" " <<b << endl;

    f2(&a,&b);
    cout<<"value of a&b after call by pointer is: " <<a <<" " <<b << endl;

    f3(a,b);
    cout<<"value of a&b after call by reference is: " <<a <<" " <<b;

return 0;
}