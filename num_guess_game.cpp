#include <iostream>
#include <ctime>

int main(){

std::cout << "******** NUMBER GUESSING GAME ********** \n";

int num;
int guess;
int tries;

srand(time(NULL));
num = rand() % 100 + 1 ;

do{
    std::cout << "Enter a guess betwen (1 to 100): ";
    std::cin >> guess;
    tries ++;

    if(guess > num){
      std::cout << "Too high! try again \n ";
    }
    else if(guess < num){
      std::cout << "Too low! Try again \n " ;
    }
    else{
      std::cout << "WOW! you got the correct number in " << tries << " tries \n" << "The correct number was: " << num << '\n'; 
    }

}while(guess != num);

std::cout << "********************* END *********************";
return 0;
}