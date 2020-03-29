// tuple.cpp 
#include <iostream>
#include <tuple>
using namespace std;

int main(){
  std::tuple<std::string, int, float> tup1("first", 3, 4.17f);
  auto tup2= std::make_tuple("second", 4, 1.1);

  std::cout << get<0>(tup1) << ", " << get<1>(tup1) << ", "
            << get<2>(tup1) << std::endl; // first, 3, 4.17
  
  std::cout << get<0>(tup2) << ", " << get<1>(tup2) << ", "
            << get<2>(tup2) << std::endl; // second, 4, 1.1

  std::cout << (tup1 < tup2) << std::endl; // true

  get<0>(tup2)= "Second";

  std::cout << get<0>(tup2) << "," << get<1>(tup2) << ","
            << get<2>(tup2) << std::endl;  // Second, 4, 1.1

  std::cout << (tup1 < tup2) << std::endl; // false

  auto pair= std::make_pair(1, true);
  std::tuple<int, bool> tup= pair;
  
  return 0;
}