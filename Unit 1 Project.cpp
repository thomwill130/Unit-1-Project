// Unit 1 Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


float volume, length, height, width, surfaceArea;


void areaCalculate(float a, float b, float c)
{
    volume = a * b * c;
    cout << volume;
}
void perimeterCalculate(float a, float b, float c)
{
    surfaceArea = 2 * (c * a + b * a + b * c);
    cout << surfaceArea;
}

int main()
{
    cout << "Hi and welcome to the renovation calculator. First, we will need to calculate the area and perimeter of the room. To do this, enter the length and height of the room. Enter the length below:\n";
    cin >> length;
    cout << "\n\nNow enter the height of the room.\n";
    cin >> height;
    cout << "\n\nFinaly, enter the width of the room.\n";
    cin >> width;
    cout << "\n\nThe area of your room is: ";
    areaCalculate(length, width, height);
    cout << "and the surface area is ";
    perimeterCalculate(length, height, width);
    cout <<". We will use these to calculate the cost of the renovation.\n\n"


