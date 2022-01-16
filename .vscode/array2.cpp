#include <iostream>
#include <array>
#include <algorithm>
    int adjust_days(int old_days);

int main(){

    const int NUMBER_OF_EMPILOYES{3};
    int vacation[NUMBER_OF_EMPILOYES], number;

    std::cout << "Enter allowed vacation days for employes 1 through " << NUMBER_OF_EMPILOYES << std::endl;
    for(number = 1; number <= NUMBER_OF_EMPILOYES; ++number){
       std::cin >> vacation[number -1];
    }
    for(number = 0; number < NUMBER_OF_EMPILOYES; ++number){
       vacation[number] = adjust_days(vacation[number]);
    }
    std::cout << "The revised number of vacation days are: " << std::endl; 
    for(number = 1; number <= NUMBER_OF_EMPILOYES; ++number){
       std::cout << "Employee number " << number << " vacation days = " << vacation[number -1] << std::endl;
    }


 return 0;
}
    int adjust_days(int old_days){
     return (old_days + 5);
    }