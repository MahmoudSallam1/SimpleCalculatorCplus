#include <iostream>
#include <string>
#include  <vector>
#include "Calculator.h"

void Calculator::add_numbers(){
    std::cout<<"Please Enter Your First Number : ";
    std::cin>>number1;
    std::cout<<"Please Enter Your Second Number : ";
    std::cin>>number2;
    result=number1+number2;
    std::string convert_into_string=std::to_string(number1)+" + "+std::to_string(number2)+" = "+std::to_string(result)+"\n";
    user_saved_data.push_back(convert_into_string);
    std::cout<<"The Sum Of " <<number1<<" + " <<number2<< " = "<<result<<std::endl;
}
void Calculator::subtract_numbers(){
    std::cout<<"Please Enter Your First Number : ";
    std::cin>>number1;
    std::cout<<"Please Enter Your Second Number : ";
    std::cin>>number2;
    result=number1-number2;
    std::string convert_into_string=std::to_string(number1)+" - "+std::to_string(number2)+" = "+std::to_string(result)+"\n";
    user_saved_data.push_back(convert_into_string);
    std::cout<<"The Subtraction Of " <<number1<<" - " <<number2<< " = "<<result<<std::endl;
}
void Calculator::multiply_numbers(){
    std::cout<<"Please Enter Your First Number : ";
    std::cin>>number1;
    std::cout<<"Please Enter Your Second Number : ";
    std::cin>>number2;
    result=number1*number2;
    std::string convert_into_string=std::to_string(number1)+" * "+std::to_string(number2)+" = "+std::to_string(result)+"\n";
    user_saved_data.push_back(convert_into_string);
    std::cout<<"The Multiplication Of " <<number1<<" * " <<number2<< " = "<<result<<std::endl;
}
void Calculator::divide_numbers(){
    std::cout<<"Please Enter Your First Number : ";
    std::cin>>number1;
    std::cout<<"Please Enter Your Second Number : ";
    std::cin>>number2;
    if(number2==0){
        std::cout<<"Dividing By Zero Is Not Allowed!! , Please Re-enter Another Number : ";
        std::cin>>number2;
    }
    result=number1/number2;
    std::string convert_into_string=std::to_string(number1)+" / "+std::to_string(number2)+" = "+std::to_string(result)+"\n";
    user_saved_data.push_back(convert_into_string);
    std::cout<<"The Division Of " <<number1<<" / " <<number2<< " = "<<result<<std::endl;
}
void Calculator::display_menu(){
      std::cout<<"\n*************************************************"<<std::endl;
      std::cout<<"[ Welcome To Mahmoud Sallam's Calculator!! ]"<<std::endl;
      std::cout<<"[     Mahmoud Mohamed Sallam & 1610065     ]"<<std::endl;
      std::cout<<"*************************************************"<<std::endl;
    do{
      std::cout<<"================================================="<<std::endl;
      std::cout<<"A - Adding Two Numbers"<<std::endl;
      std::cout<<"B - Subtracting Two Numbers"<<std::endl;
      std::cout<<"C - Multiplying Two Numbers"<<std::endl;
      std::cout<<"D - Divising Two Numbers"<<std::endl;
      std::cout<<"E - CheckOut User's Last Operations"<<std::endl;
      std::cout<<"Q - Quit"<<std::endl;
      std::cout<<"================================================="<<std::endl;
      std::cout<<"\nEnter Your Operation From The List Above: ";
      std::cin>>choice;

      if  (choice=='a' || choice=='A'){
          add_numbers();
        }

      else if (choice=='b' || choice=='B'){
        subtract_numbers();
      }

      else if (choice=='c' || choice=='C'){
        multiply_numbers();
      }

      else if (choice=='d' || choice=='D'){
       divide_numbers();
      }

     else if (choice=='e' || choice=='E'){
       save_history();
      }
      

      else if (choice=='q' || choice=='Q')
           std::cout<<"\nGOODBYE,See You Next Time ^_^"<<std::endl;
      else
           std::cout<<"UNKOWN!!!----TRY AGAIN"<<std::endl;

  }
      while(choice!='q'&& choice!='Q');
}

void Calculator::save_history(){
  int counter{0};
  std::cout<<"================================================="<<std::endl;
  std::cout<<"[CheckOut The User's Previous Inputs & Outputs & Operations] "<<std::endl;
  for(auto const str : user_saved_data)
  {
    counter++;
    std::cout<<counter<<" => ";
    std::cout<<str<<std::endl;
  }
  
}


