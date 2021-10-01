// Unit 1 Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;





float areaCalculate(float a, float b, float c)
{
    return a * b * c;
}
float surfaceAreaCalculate(float a, float b, float c)
{
    return 2 * ((c * a) + (b * a) + (b * c));
}

int main()
{
    float volume, length, height, width, surfaceArea;
    cout << "Hi and welcome to the renovation calculator. First, we will need to calculate the area and perimeter of the room. To do this, enter the length and height of the room. Remember to use meters for all of these measurements. Enter the length below:\n";
    cin >> length;
    cout << "\nNow enter the height of the room.\n";
    cin >> height;
    cout << "\nFinaly, enter the width of the room.\n";
    cin >> width;
    cout << "\nThe area of your room is ";
    volume = areaCalculate(length, width, height);
    cout << volume;
    cout << "m^2 and the surface area is ";
    surfaceArea = surfaceAreaCalculate(length, height, width);
    cout << surfaceArea;
    cout << "m. We will use these to calculate the cost of the renovation.\n\n";
}


