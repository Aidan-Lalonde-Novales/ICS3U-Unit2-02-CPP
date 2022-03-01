// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved
//
// Created by Aidan Lalonde-Novales
// Created on 2022-03-01
// This is a program that calculates the perimeter
// and area of a rectangle with user input

#include <iostream>

int main() {
  // function that calculates area and perimeter
  int length;
  int width;
  int area;
  int perimeter;

  // input
  std::cout << "Enter the Length of the rectangle (cm): ";
  std::cin >> length;
  std::cout << "Enter the Width of the rectangle (cm): ";
  std::cin >> width;

  // process
  perimeter = 2*(length+width);
  area = length*width;

  // output
  std::cout << std::endl;
  std::cout << "Perimeter is " << perimeter << " cm." << std::endl;
  std::cout << "Area is " << area << " cm²." << std::endl;
  std::cout << "\nDone." << std::endl;
}
