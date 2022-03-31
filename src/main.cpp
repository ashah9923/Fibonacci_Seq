#include <iostream>
#include "../include/fib.h"


int main()
{
    int n, m= 0, i;
    std::cout << "Enter the number of terms: "; 
    std::cin >> n;
      //accepting the terms
    std::cout << "Fibonacci Series: ";
    for (i = 1; i <= n; i++)
    {
        std::cout << " " << fib(m);
        m++;
    }
  
  return 0;


}