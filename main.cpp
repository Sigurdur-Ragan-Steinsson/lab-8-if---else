#include <iostream>

using namespace std;
int main(void){
  int year;cout << "Enter a year: ";
  cin >> year;
  
  if (year % 4 != 0){
    cout << "common year" << endl;
  }
  else {
    if (year % 100 != 0){
      cout << "leap year" << endl;
    }
    else {
      if (year % 400 != 0){
        cout << "common year" << endl;
      }
      else{
        cout << "leap year" << endl;
      }
    }
  }

  }



  // if the year number isn't divisible by 4, it is a common yearotherwise, if the year number isn't divisible by 100, it is a leap yearotherwise, if the year number isn't divisible by 400, it is a common yearotherwise, it's a leap year