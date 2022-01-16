#include <iostream>
#include <vector>

void input_data(int a[], int last_plant_number);

void get_total(int& sum);

int main(){

const int NUMBERS_OF_PLANTS = 4;
int produduction[NUMBERS_OF_PLANTS];
char answer;
do
{
   input_data(produduction, NUMBERS_OF_PLANTS);
   std::cout << std::endl;
   std::cout << "Total production for each" << " of plants 1 through 4: " << std::endl;
   for(int number = 1; number <= NUMBERS_OF_PLANTS; ++number)
      std::cout << produduction[number -1] << " ";
      std::cout << std::endl;
      std::cout << "Test again?(type y or n and Return):  ";
 
     std::cin >> answer;   

} while (answer != 'n' && answer != 'N');

std::cout << "Goodbye" << std::endl;

 return 0;
}


 void input_data(int a[], int last_plant_number){
  for(int plant_number = 1; plant_number <= last_plant_number; ++plant_number){
      std::cout << "Enter production data for plant number: " << plant_number << std::endl;
      get_total(a[plant_number -1]);
  }
 }

void get_total(int& sum){
  std::cout <<"Enter number of units producted by each department. " << std::endl  
            << "Append a negative number to the end of the list." << std::endl;
   sum = 0;
  int next;
  std::cin >> next;
  while (next >= 0)
  {
     sum += next;
     std::cin >> next;
  }
  std::cout << "Total =" << sum << std::endl;
}