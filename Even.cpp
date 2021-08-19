This code checks whether the number is even or not

#include<iostream>
 using namespace std;
  int main()
  {
    int number;
  
    //Enter the number which You want to check
    cout << " Enter the Number: ";
    cin >> number;
  
    if (number % 2 == 0)
     {
      cout << " The entered number is EVEN \n";
    }
  
   else
      cout << " The entered number is NOT EVEN \n"
    
    return 0;
  }