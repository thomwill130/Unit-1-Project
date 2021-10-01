// Unit 1 Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


float area, length, height;


void areaCalculate(float a, float b)
{
    float c = a * b;
    area = 6 * (c * c);
    cout << area;
}
void perimeterCalculate(float a, float b)//***
{
    
}

int main()
{
    cout << "Hi and welcome to the renovation calculator. First, we will need to calculate the area and perimeter of the room. To do this, enter the length and height of the room. Enter the length below:\n";
    cin >> length;
    cout << "\n\nNow enter the height of the room.\n";
    cin >> height;


