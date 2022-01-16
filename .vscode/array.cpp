#include <iostream>
#include <vector>
#include <array> f

int main(){

 int scores[5], max, number;
 std::cout << "Enter five scores: ";
 std::cin >> scores[0];
 max = scores[0];
 for (size_t number = 1; number < 5; ++number)
 {
     std::cin >> scores[number];
     if(scores[number] > max){
      max =scores[number];
     }
 }
 std::cout << "The highes score is: " << max << std::endl;
 std::cout << "The scores and their\n" << "differences from the highest are:\n";
 for(number = 0; number < 5; ++number){
   std::cout << scores[number] << " of by "
             << (max - scores[number]) << std::endl;
 } 



 return 0;
}