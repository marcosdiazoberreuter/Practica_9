#include <iostream>
#include <cmath>

int main() {
  int n=1, i, j=0, num;

  std::cout << "Introduzca un número: " << std::endl;
  std::cin >> n;

  do {
    j = 0;
    num = (pow(2,n))-1;
    for(i=2;i<num;i++) {
      if((num%i)==0) {
        j=1;
      }
    }
    if(j==0) {
      std::cout << " El numero " << num << " es un numero primo de Mersenne" << std::endl;
    }
    n++;
  }
  while(n <= 31);
  
  return 0;
}