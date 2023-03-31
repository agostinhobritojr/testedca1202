#include <tuple>
#include <stdexcept>
#include <iostream>
#include <string>
#include <cmath>

std::pair<double, double> findRoots(double a, double b, double c)
{
  double discriminant, x1, x2;
  discriminant = b*b-4*a*c;
  if(a > 0){
    x1 = (-b + std::sqrt(discriminant))/(2*a);
    x2 = (-b - std::sqrt(discriminant))/(2*a);
    return std::pair(x1, x2);
  }
  else if(a==0){
    x1 = -b /(2*a);
    return std::pair(x1, x1);
  }
  else  return std::pair(0,0);
}

#ifndef RunTests
int main()
{
    std::pair<double,double> roots = findRoots(2, 10, 8);
    std::cout << "Roots: " + std::to_string(roots.first) + ", " + std::to_string(roots.second);
}
#endif
