#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>


int n, m, p; 
std::vector<double> numbers;


double random_numbers(int m, int p) {
  return (double) ((rand() % (p - m)) + m);
}

int vector_sum() {
  int sum = 0;
  for(int i = 0 ; i < n ; i++) {
    sum = numbers[i] + sum;
  }
  return(sum);
}

int vector_prod() {
  int prod = 1;
  for(int i = 1 ; i < n ; i++) {
    prod = numbers[i] * prod;
  }
  return(prod);
}

int vector_max (int numbers [] , int n) {
  int max = numbers[0];
  for (int i = 0 ; i < n ; i++) {
    if (numbers[i] > max) {
      max = numbers[i];
    }
  }
  return (max);
}

int vector_min (int numbers [] , int n) {
  int min = numbers[0];
  for (int i = 0 ; i < n ; i++) {
    if (numbers[i] < min) {
      min = numbers[i];
    }
  }
  return (min);
}

int vector_med() {
  int sum = 0;
  int med;
  for(int i = 0 ; i < n ; i++) {
    sum = numbers[i] + sum;
  }
  med = sum / n;
  return(med);
}


int main() {
  srand(time(NULL));

  std::cout << "Introduzca el tamaño de su vector, el número inicial y el número final de la siguiente forma: n m p" << std::endl;
  std::cout << "El numero 'm' ha de ser menor que el número 'p'." << std::endl;
  std::cin >> n >> m >> p;

  numbers.resize(n);

  for (int i = 1; i <= n ; i++) {
    numbers.push_back(random_numbers(m, p));
  }

  for (double n : numbers) {
    std::cout << n << '\n';
  }

  std::cout << std::endl;

  std::cout << "Escriba el número de la opción que desea." << std::endl;

  std::cout << std::endl;

  std::cout << "1. Suma" << std::endl;
  std::cout << "2. Producto" << std::endl;
  std::cout << "3. Máximo" << std::endl;
  std::cout << "4. Mínimo" << std::endl;
  std::cout << "5. Media" << std::endl;

  std::cout << std::endl;

  int option;
  std::cin >> option;

  std::cout << std::endl;
  
  if (option == 1) {
    std::cout << "La suma de los elementos del vector es: " << vector_sum << std::endl;
  }

  if (option == 2) {
    std::cout << "El producto de los elementos del vector es: " << vector_prod << std:: endl;
  }
  
  if (option == 3) {
    std::cout << "El máximo de los elementos del vector es: " << vector_max << std:: endl;
  }
  
  if (option == 4) {
    std::cout << "El mínimo de los elementos del vector es: " << vector_min << std:: endl;
  }

  if (option == 5) {
    std::cout << "La media de los elementos del vector es: " << vector_med << std:: endl;
  }

}