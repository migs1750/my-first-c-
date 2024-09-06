#include<iostream>
using namespace std;

int main()
{

     // rectangle
     
   float length , width, perimeter , area;
   float side1, side2, side3 , base , height;
   
   cout << "Enter the length of the rectangle: ";
   cin >> length;
   
   cout << "Enter the width of the rectangle: ";
   cin >> width;
   
   perimeter = (length + width) * 2;
   area = length * width;
   
   cout << "The perimeter of the rectangle is: " << perimeter << endl;
   cout << "The area of the rectangle is: " << area << endl;
   
   
   //triangle
   
   cout << "Enter the base of the triangle: ";
   cin >> base;
   cout << "Enter the height of the triangle: ";
   cin >> height;
   
   area = base * height / 2;
   
   cout << "The area of the triangle is: " << area << endl;
   
   
   
   cout << "Enter the first side: ";
   cin >> side1;
   cout << "Enter the second side: ";
   cin >> side2;
   cout << "Enter the third side: ";
   cin >> side3;
   
   perimeter = side1 + side2 + side3;
   
   cout << "The perimeter of the triangle is: " << perimeter << endl;
   
    
    
    
    
    
    
    
    
    return 0;
}