#include <iostream>
#include <cmath>

int main() {
  int n , counter = 0 , cn = 0 , sum = 0 , last_digit = 0;

  do {
    std::cout << "Introduzca un número si quiere saber si se trata de un número de Armstrong. ";
    std::cin >> n;
  }
  
  while(n <= 0);
  
  cn = n;
  
  while(n > 0){
    n /= 10;
    counter++;
  }

  n = cn;

  for (int i = 0 ; i < counter ; i++) {
    last_digit = n % 10;
    sum = sum + pow(1.0*last_digit , counter);
    n /= 10;
  }

  n = cn;
  
  if(sum == n) {
    std::cout << "El número " << n << " es un número Armstrong" << std::endl;
  }
  
  else {
    std::cout << "El número " << n << " no es un número Armstrong" << std::endl;
  }

  return 0;
}




