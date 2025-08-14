#include <stdio.h>

int main()
{
  //* Types of c constants :
  // a) Primary Constants – Integer, Real, Character
  //  (b) Secondary Constants – Pointer, Array, String, Structure, Union,Enum  we will look primary constant :

  int a = 6;
  float b = -67.76;
  char c = 'V';

  // Declaring variable ---
  float _pi = 3.14;
  int pq1 = 7;


  printf("%d %f  \n" , pq1, _pi);
  //   int pq% = 21;   Not allowed

  //  The general form of printf( ) function is,
  // printf ( "<format string>", <list of variables> ) ;
  // <format string> can contain,
  // %f for printing real values
  // %d for printing integer values
  // %c for printing character values

  printf("The value of a is %d\n", a);
  printf("The value of b is %f\n", b);
  printf("The value of c is %c\n", c);

  // Taking input from the user :
  int p;
  char ch;

  printf("Enter the value of a : ");
  scanf("%d", &p);
  printf("Enter the value of ch : ");
  scanf(" %c", &ch);

  printf(" The value of a and ch is : %d and %c", p, ch);
  return 0;

}