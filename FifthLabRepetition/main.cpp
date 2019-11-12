//
//  main.cpp
//  FifthLabRepetition
//
//  Created by Mateusz Kot on 12/11/2019.
//  Copyright © 2019 Mateusz Kot. All rights reserved.
//

#include <iostream>

using namespace std;

double divide(double a, double b)
{
    if(b == 0)
    {
        throw "ERROR! Division by zero!!!\n";
    }
    else
        throw "Proper divison!\n";
    
    return a/b;
}


int main()
{
    try
    {
        divide(3,0);
    }
    
    catch(const char*s)
    {
        cerr << s;
    }
    


    return 0;
}



/*
 
 class divide: public std::exception
 {
     virtual const char *what() const throw()
     {
         return "Division by zero occured\n";
     }
     ex;
 };
 
 
 int main()
 {
 
 try
 {
    throw ex;
 }
 
 catch(divide&ex)
 {
    cout << ex.what() << endl;
 }
 
 
 }
 
 
  
  try
  {
   error (suspicious code)
  
  }
  
  catch(int i or ...)
  {
  error holding
  
  }
  
  throw
  
  void foo() noexcept - function has no exception
  {

  
  }
  
  std::exception -> logic error, routine error, bad_cast
  method what() - tells what happened in the exception handling
 */
 
 
 
 
 
 
 
 

