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
//material cost calculator, $3 per square foot
float materialCostPreTax(float a)
{
    return 3 * a;
}
//tax calculator
float taxCalculate(float a)
{
    return a + (a * tax);
}
//66 square feet per hour
float timeCalculator(float a)
{
    return (a / 66);
}
// time x the price per hour
float wageCalculator(float a)
{
    return a * (22.50);
}
//adding cost of time and materials
float finalTotal(float a, float b)
{
    return a + b;
}
//CHALLENGE: EXTRA FEATURE #1
void screenReset()
{
    cin.ignore();
    cout << "\n\nPress any key to continute.";
    cin.get();
    system("cls");
}


//main
int main()
{
    //base calculations using return functions
    float volume, length, height, width, windowAmount, doorAmount, preTaxPrice, postTaxPrice, paintAmount, time, wages, finalFinalTotal;
    cout << "Hi and welcome to the renovation calculator. First, we will need to calculate the area and perimeter of the room. To do this, enter the length and height of the room. Remember to use feet for all of these measurements. Enter the length below:\n";
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

    screenReset();

    //calculating and outputting material cost
    paintAmount = paintCalculator(surfaceArea);
    preTaxPrice = materialCostPreTax(paintAmount);
    cout << "Now since we have our calculations for the room, we know that we need to paint " << surfaceArea << " square feet. Paint costs $3 per square foot and we are painting 2 coats. Therefore, our material cost pre-tax is $" << preTaxPrice << ".\n";
    postTaxPrice = taxCalculate(preTaxPrice);
    cout << "\nAfter adding in tax, our final total for materials needed is $" << postTaxPrice << ".\n";

    //calculating wages, time  
    time = timeCalculator(surfaceArea);
    wages = wageCalculator(time);
    cout << "\nNow we need just need to find out how many hours the painting will take, and then find out how much it will cost for those hours.";
    cout << "\n\nThe painting will take " << time << " hours. Each hour cost $22.50 including taxes, so for that time it will cost $" << wages << ".";

    screenReset();

    cout << "Finally, we are going to calculate our final costs and print a receipt.\n\n";
    cout << "To buy the materials needed for this renovation, it will cost $" << postTaxPrice << ". The price of the workers hours is $" << wages << ". If we combine the two, your final total including all taxes is:\n\n";
    finalFinalTotal = finalTotal(postTaxPrice, wages);
    cout << "$" << finalFinalTotal << ".\n\n\n";


    //CHALLENGE: RECEIPT

}

void receipt()
{
    cout << "________________________________________________\n";
    cout << "|                                               |\n";
    cout << "|                    Receipt                    |\n";
    cout << "|-----------------------------------------------|\n";
    cout << "|                                               |\n";
    cout << "|                                               |\n";
    cout << "|                                               |\n";
    cout << "|                                               |\n";
    cout << "|                                               |\n";
    cout << "|                                               |\n";
    cout << "|                                               |\n";
    cout << "|                                               |\n";
    cout << "|                                               |\n";
    cout << "|                                               |\n";
    cout << "|                                               |\n";
    cout << "|                                               |\n";

}
