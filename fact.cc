#include "Chapter6.h"
int fact(int n)
{
int fact=1;
while(n>0){
    fact = fact * n;
    --n;
}
return fact;
}