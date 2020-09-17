// Author: Krish Choudhary ksc5496@psu.edu
// Collaborator: Aravind Hariprasad azh5899@psu.edu
// Collaborator: Xinyi Yang xvy5166@psu.edu
// Collaborator: Peter Schulman pks5481@psu.edu
// Section: 4
// Breakout: 6  

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int sum_n(int n){
  if (n != 0)
  {
    return (sum_n(n-1) + n);
  }
  else{
    return 0;
  }
}
void print_n(const char *s, int n){
  if (n != 0)
  {
    printf("%s\n",s);
    return print_n(s,n-1);
  }
  else 
  {
  }
}

int main(void) {

  char* temp = readline("Enter an int: ");
  int n = atof(temp);

  int sum = sum_n(n);
  printf("sum is %d.\n", sum);

  char* s = readline("Enter a string: ");

  print_n(s,n);
}
