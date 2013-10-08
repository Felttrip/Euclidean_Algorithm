//Eucildean algorithm
#include <stdio.h>

int main(void)
{
  unsigned int x;
  unsigned int y;
  char yes = 'y';
  while(yes=='y')
  {
    printf("\nEnter the first number: ");
    scanf("%d",&x);
    printf("\nEnter the second number: ");
    scanf("%d",&y);
    gcd(x,y);
    do
    {
      printf("\nWould you like to compute another? <y/n> ");
      scanf("\n%c",&yes);
      if(yes!='y'&&yes!='n')
        printf("\nError please enter y for yes or n for no");
    }
    while(yes!='y'&&yes!='n');
  }
    
  
  
}

//returns the gcd of two numbers
int gcd(unsigned int x,unsigned int y)
{
  int num = euclid(x,y);
  if(x>4294967295||y>4294967295)
  {
    printf("Error, too large of number, the result will be off\n");
  }
  printf("\nGCD(%d,%d) = %d\n",x,y,num);
}

int euclid(unsigned int a, unsigned int b)
{
  unsigned int r = a%b;
  
  if(r>0)
    euclid(b,r);
  if(r==0)
    return b;
  else
    return;
}
