#include<iostream>
using namespace std;
int main ()
{
 int no;
  long fac;
  cout<<"Enter a Number: ";
  cin>>no;
  fac=1;
  for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }
  cout<<"Factorial of   is    "<<no<<fac<<endl;
  return 0;
  
  }
/* nmnnnnnnn 
#include <stdio.h>
int main()
{
    int no;
    long fac;

    printf("Enter a Number : ");
    scanf("%d", &no);

    fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }

    printf("Factorial of %d is %ld\n", no, fac);  
    return 0;
}
*/