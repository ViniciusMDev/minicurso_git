#include "fibonacci.h"

int fib(int n){
  int i, aux , anterior , f;
  anterior = 1;
  f = 1;
  for (i = 2; i < n; i++) {
    aux = f;
    f = f + anterior ;
    anterior = aux;
 }
 return f;
}
