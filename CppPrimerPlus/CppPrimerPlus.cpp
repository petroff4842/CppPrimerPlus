// CppPrimerPlus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

void task1();
void task2();
void task3();
 int _tmain(int argc, _TCHAR* argv[])
{
  task1();
  task2();
  task3();
	return 0;
}

void task1()
{
  const int convertFactor = 12;
  std::cout << "Enter your height in inches:\n";
  std::cout << "__\b\b";
  int height = 0;
  std::cin >> height;
  if( height > 0 )
  {    
    const int feet = height / convertFactor;
    const int inches = height % int(convertFactor);
    std::cout << "Your height is " << feet << " feet " << inches << " inches\n";
  }
  else
  {
    std::cout << "Incorrect input\n";
  }
}

void task2()
{
  const int convertFactor = 12;
  int feet = 0;
  int inches = 0;
  float weight = 0;
  std::cout << "Enter your height in feet:\n";
  std::cout << "__\b\b";
  std::cin >> feet;
  std::cout << "Enter your height in inches:\n";
  std::cout << "__\b\b";
  std::cin >> inches;
  std::cout << "Enter your weight in pounds:\n";
  std::cout << "__\b\b";
  std::cin >> weight;
  if( feet > 0 && inches >= 0 && weight > 0 )
  {
    // convert inches to meters
    const float meters = (convertFactor * feet + inches) * 0.0254f;

    // convert pounds to kilograms
    weight /= 2.2f;

    // compute BMI and display it
    const float k_BMI = weight / (meters * meters);
    std::cout << "Your BMI = " << k_BMI << std::endl;
  }
  else
  {
    std::cout << "Incorrect input\n";
  }
}

void task3()
{
  int degrees = 0;
  int minutes = 0;
  int seconds = 0;
  std::cout << "Enter latitude degrees:\n";
  std::cout << "___\b\b\b";
  std::cin >> degrees;
  std::cout << "Enter latitude minutes:\n";
  std::cout << "__\b\b";
  std::cin >> minutes;
  std::cout << "Enter latitude seconds:\n";
  std::cout << "__\b\b";
  std::cin >> seconds;
  const float convertFactor = 60;
  
  // converting seconds to minutes
  float minutesFromSeconds = float(seconds) / 60;
  
  // get new value of minutes
  minutesFromSeconds += float( minutes );

  // converting minutes to degrees
  float degreesFromMinutes = minutesFromSeconds / convertFactor;

  // get new value of degrees
  degreesFromMinutes += float( degrees );
  std::cout << "Value in degrees is " << degreesFromMinutes << std::endl;
  system("PAUSE");
}