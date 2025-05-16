#include <stdio.h>
#include <stdlib.h>

int recursividade(int n);

int main(){
  int x = recursividade(2);
  printf("%d\n", x);
  return 0;
}

int recursividade(int n){
  if (n ==0)
    return 1;
  else
    return 2 *  recursividade(n-1); 
}


