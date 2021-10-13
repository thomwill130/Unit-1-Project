// Unit 1 Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


//global variables
float surfaceArea;
const float tax = 0.13;

//area calculator. a = length, b = height, c = width
float areaCalculate(float a, float b, float c)
{
    return a * b * c;
}
//surface area or perimeter calculator. lots of variables. a = length, b = height, c = width, a*c = floor subtract, d = window subtract, e = door subtract
float surfaceAreaCalculate(float a, float b, float c, float d, float e)
{
    return 2 * (((c * a) + (b * a) + (b * c)) - (a * c) - (d * 9) - (e * 16));
}
//amount of paint, *2 because we need 2 coats of paint
float paintCalculator(float a)
{
    return a * 2;
}
//material cost calculator, $3 per square meter
float materialCostPreTax(float a)
{
    return 3 * a;
}

float taxCalculate(float a)
{
    return a + (a * tax);
}
int main()
{
    //base calculations using return functions
    float volume, length, height, width, windowAmount, doorAmount, preTaxPrice, postTaxPrice, paintAmount;
    cout << "Hi and welcome to the renovation calculator. First, we will need to calculate the area and perimeter of the room. To do this, enter the length and height of the room. Remember to use meters for all of these measurements. Enter the length below:\n";
    cin >> length;
    cout << "\nNow enter the height of the room.\n";
    cin >> height;
    cout << "\nFinaly, enter the width of the room.\n";
    cin >> width;
    cout << "\nThat's it for measurements. Now we need you to enter the amount of doors and windows in your room, because we won't be painting those.\n\nEnter the amount of windows below:\n";
    cin >> windowAmount;
    cout << "\nNow enter the amount of doors in your room below:\n";
    cin >> doorAmount;
    cout << "\nThe area of your room is ";
    volume = areaCalculate(length, width, height);
    cout << volume;
    cout << "m^3 and the surface area (that we will be painting) is ";
    surfaceArea = surfaceAreaCalculate(length, height, width, windowAmount, doorAmount);
    cout << surfaceArea;
    cout << "m^2. Keep in mind there is no need to include the surface area of the floor in this calculation, because we will not be painting the floor. So it has been removed. We will use these to calculate the cost of the renovation.\n\n";
    //i want to put a press enter to continue here and then cls for the extra mark for something we havent learned in class

    //something
    paintAmount = paintCalculator(surfaceArea);
    preTaxPrice = materialCostPreTax(paintAmount);
    cout << "Now since we have our calculations for the room, we know that we need to paint " << surfaceArea << " meters squared. Paint costs $3 per square foot and we are painting 2 coats. Therefore, our material cost pre-tax is $" << preTaxPrice << ".\n";
    postTaxPrice = taxCalculate(preTaxPrice);
    cout << "\nAfter adding in tax, our final total for materials needed is $" << postTaxPrice << ".\n";

    //calculating wages, time  

}


