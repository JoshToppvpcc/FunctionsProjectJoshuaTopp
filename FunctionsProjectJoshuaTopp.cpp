// FunctionsProjectJoshuaTopp.cpp : This file contains the 'main' function. Program execution begins and ends there.


// The user inputs are the coordinates for the center of the circle and a point on the circles circumference. Once 
// those are entered, the first function CalcDistance is called from within CalcRadius and that calcuates the distance betrween the points.
// That distance is then stored in the radius variable which is returned and used as a n argument for the CalcCircumference and CalcArea functions. 
// //Each function then outputs their respective values.
// Preconditions for CalcDistance : Making sure the function is correctly called in CalcRadius, and that the variables a b x and y are transferred. 
// Post conditions for CalcDistance : Return the value distance so that the function has an asscoiated value. 
// Preconditions for CalcRadius : Make sure to prompt the user to enter the correct kind of points, being center and on the circumference.
// // Also declare a b x and y and store the user response in to each respectively. 
// Post conditions for CalcRadius : MAke sure to trasnfer value of distance variable into radius then return radius, so it can be used in later functions. 
//Preconditions for CalcCircumference : Make sure I had the correct math lined up to manipulate the radius variable.
// And that CalcRadius (distance) was stored in variable radius so radius could be used in CalcCercumference.
// Post conditions for CalcCircumference : Make sure to return variable Circumference so it could be stored with the right data and later output. 
//Preconditions for CalcArea : The same as CalcCircumference because they both have a specific formula that use the variable radius. 
// Post conditions for CalcArea : similar to CalcCircumference, just make sure to return Area value so it can be output. 

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <math.h>
#include <cmath>
using namespace std;
float CalcDistance(float a, float b, float y, float x) {
    float distance = sqrt(((x - a) * (x - a)) + ((y - b) * (y - b)));
    return distance;
}



float CalcRadius(float distance) {
     float a = 0, b = 0, x = 0, y = 0;
     cout << "Input two points, starting with the center of the circle" << endl;
     cout << "and then a point on the circumference as x1 then y1 then x2 then y2";
     cin >> a;
     cin >> b;
     cin >> x;
     cin >> y;
     float radius = CalcDistance(a, b, x, y);
     cout << "The radius of the circle is  : " << radius;
     return radius;

}
 float CalcCircumference(float radius) {
     ;
     double circumference = 2 * 3.1416 * radius;
     cout << "The circumference of the circle is  : " << circumference<< "  ";
     return circumference;
 }
 float CalcArea(float radius) {
     float area = 3.1516 * (radius * radius);
     cout << "The area of the circle is  : " << area;
     return area;
 }


int main(float distance, float radius, float circumference, float area)
{
    radius = CalcRadius(distance);
    circumference = CalcCircumference(radius);
    area = CalcArea(radius);
    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
