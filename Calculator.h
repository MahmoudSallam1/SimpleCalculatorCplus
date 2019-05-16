#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_
#include <iostream>
#include <string>
#include <vector>
class Calculator 
{
  private:
  double number1;
  double number2;
  double result;
  char choice;
  std::vector <std::string> user_saved_data{};
  public:
  void add_numbers();
  void subtract_numbers();
  void multiply_numbers();
  void divide_numbers();
  void display_menu();
  void save_history();


};

#endif //_CALCULATOR_H_
