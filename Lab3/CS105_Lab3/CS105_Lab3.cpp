//Olivia Walker

//CS105 Lab 3 - Polymorphism Function Overloading

#include <iostream>
#include <cmath>
using namespace std;

class Shapes { // Parent class
protected: //creating a protected access specifier for holding the datamembers & allows child class to access
    double base;
    double height;
    double result;
public: //creating a public access specifier for holding the member functions
    void draw() {
        cout << "Draw";
   }

    void getData() {
        cout << result;
    }
    void calculateArea() {
        cout << "CalculatedArea";
    }
    void giveResult() {
        cout << "The Result is:  " << result << endl; //outputting the result from getData
    }

};
class Square : public Shapes { //Child Class
public:
   
    void draw() { //overriding the draw() function from the class shapes

        cout << "*******************" << endl;
        cout << "Square Calculator" << endl;
        cout << "*******************" << endl;

        cout << " * * * * * * * *  " << endl;
        cout << " * * * * * * * *  " << endl;
        cout << " * * * * * * * *  " << endl;
        cout << " * * * * * * * *  " << endl;
        cout << " * * * * * * * *  " << endl;
        cout << " * * * * * * * *  " << endl;
    }
    void getData() { //getting the user to input
        cout << "Please Enter The Base Of The Square: ";
        cin >> base;
    }
    void calculatePerimeter() { //calculating the perimeter
        result = 4 * base; 
    }
    void calculateArea() { //calculating the area
        result = base * base;
    }
};
class Rectangle : public Shapes { //Child Class
private: 
    
public: 
    void draw(){
    cout << "*******************" << endl;
    cout << "Rectangle Calculator" << endl;
    cout << "*******************" << endl;

    cout << " * * * * * * * * * * * *  " << endl;
    cout << " * * * * * * * * * * * *  " << endl;
    cout << " * * * * * * * * * * * *  " << endl;
    cout << " * * * * * * * * * * * *  " << endl;
    cout << " * * * * * * * * * * * *  " << endl;

    }
    void getData() { //getting the user to input
        cout << "Please Enter The Length Of The Rectangle: ";
        cin >> base;
        cout << "Please Enter The Width Of The Rectangle: ";
        cin >> height;

    }
    void calculatePerimeter() { //calculating the perimeter
        result = (base + height) * 2; //getting the permeter by adding base & height and times by 2
    }
    void calculateArea() { //calculating the area
        result = base * height;
    }
};
class Triangle : public Shapes { //Child Class
private: //access specifier
    double a, b, c;
public: 
    void draw() {
        cout << "*******************" << endl;
        cout << "Triangle Calculator" << endl;
        cout << "*******************" << endl;
       
        cout << "             * " << endl;
        cout << "            * * " << endl;
        cout << "           * * * " << endl;
        cout << "          * * * * " << endl;
        cout << "         * * * * * " << endl;
        cout << "        * * * * * * " << endl;
        cout << "       * * * * * * * " << endl;
        cout << "      * * * * * * * * " << endl;    
    }
    void getData(int choice) { //creating a choice for get data
        if (choice == 1) { //creating a if statement for the user to input for triangle
            cout << "Please Enter The First Side Of The Triangle: ";
            cin >> a;
            cout << "Please Enter The Second Side Of The Triangle: ";
            cin >> b;
            cout << "Please Enter The Third Side Of The Triangle: ";
            cin >> c;

            calculateTriangle(a, b, c); //calling the first function with parameters
        }
        else if (choice == 2) {
            cout << "Please Enter The Base Of The Triangle: ";
            cin >> base;
            cout << "Please Enter The Height Of The Triangle: ";
            cin >> height;

            calculateTriangle(); //Calling the non-parameter function
        }
    
       
    }
    void calculateTriangle(double x, double y, double z) {
     
        result = x + y + z;
    }
    void calculateTriangle() { //Function Overloading - two of the same name but a different function
        result = (base * height) / 2;
    }
    
    
   
};
class Circle : public Shapes { //Child Class
private: 
    double radius;
    double const pi = 3.14;
public:
    void draw() {
        cout << "*******************" << endl;
        cout << "Circle Calculator" << endl;
        cout << "*******************" << endl;

        cout << "     * * * * " << endl;
        cout << "  *           * " << endl;
        cout << " *             * " << endl;
        cout << "*               * " << endl;
        cout << "*               * " << endl;
        cout << "*              * " << endl;
        cout << " *            * " << endl;
        cout << "   * * * * * " << endl;
    }
    void getData() { //inputting for the user to get data
        cout << "Please Enter The Radius Of The Circle: ";
        cin >> radius;
    }
    void calculateArea() { // calculating the area
        result = pi * pow(radius, 2);
    }
    void calculatePerimeter() { //calculating the perimeter
        result = 2 * pi * radius;
    }


};

 
int main()
{
    Square s; //creating a variable
    Rectangle r;
    Triangle t;
    Circle c;

    int choice1, choice2;
    bool correct;
   do { //creating a do statement
    //Creating Shapes Output 
       correct = true; //initializing correct to true

    cout << "*******************" << endl;
    cout << "Shapes Calculator" << endl;
    cout << "*******************" << endl;

    cout << "\n1. Square" << endl;
    cout << "\n2. Rectangle" << endl;
    cout << "\n3. Triangle" << endl;
    cout << "\n4. Circle" << endl;
    cout << "\n5. Exit" << endl;
    cout << "\n Please Enter Your Choice Between 1 & 5: ";
    cin >> choice1; //input for the user to choose

    switch(choice1){ //creating a switch statement
    case 1:
         s.draw();
         cout << "\n 1. Area(Area = Base * Base sq.units)";
         cout << "\n 2. Parameter(parameter = 4 * Base sq.units)";
         cout << "\n 3. Go Back To Main Menu (Shapes Calculator)";

         cout << "\n Please Enter Your Choice Between 1 & 3: ";
         cin >> choice2;
         if (choice2 == 1) {
             s.getData(); //accessing the square get data
             s.calculateArea(); //accessing the square calculated area
             s.giveResult(); //accessing the give result 
         }
         else if (choice2 == 2) {
             s.getData(); 
             s.calculatePerimeter();
             s.giveResult();
         }
         else if (choice2 == 3) {
             cout << "\nGoing Back To Main Menu..." << endl;
         }
         else {
             cout << "\nInvalid Input" << endl;
         }
         break;
    case 2:
        r.draw();// accessing rectangle draw function
        cout << "\n 1. Area(Area = length * witdth sq.units)";
        cout << "\n 2. Parameter(parameter = 2 * length + width sq.units)";
        cout << "\n 3. Go Back To Main Menu (Shapes Calculator)";
        cout << "\n Please Enter Your Choice Between 1 & 3: ";
        cin >> choice2;
        if (choice2 == 1) {
            r.getData();
            r.calculateArea();
            r.giveResult();
        }
        else if (choice2 == 2) {
            r.getData();
            r.calculatePerimeter();
            r.giveResult();
        }
        else if (choice2 == 3) {
            cout << "\nGoing Back To Main Menu..." << endl;
        }
        else {
            cout << "\nInvalid Input" << endl;
        }
        break;
        case 3:
            t.draw();
            cout << "\n 1. Area(Area = base * height / 2 sq.units)";
            cout << "\n 2. Parameter(parameter = a + b + c sq.units)";
            cout << "\n 3. Go Back To Main Menu (Shapes Calculator)";
            cout << "\n Please Enter Your Choice Between 1 & 3: ";
            cin >> choice2;
            if (choice2 == 1) {
                t.getData(2);
                t.giveResult();
            }
            else if (choice2 == 2) {
                t.getData(1);
                t.giveResult();
            }
            else if (choice2 == 3) {
                cout << "\nGoing Back To Main Menu..." << endl;
            }
            else {
                cout << "\nInvalid Input" << endl;
            }
            break;
        case 4:
            c.draw();
            cout << "\n 1. Area(Area = 3.14 * radius ^2 sq.units)";
            cout << "\n 2. Parameter(parameter = 2 * 3.14 * radius sq.units)";
            cout << "\n 3. Go Back To Main Menu (Shapes Calculator)";
            cout << "\n Please Enter Your Choice Between 1 & 3: ";
            cin >> choice2;

            if (choice2 == 1) {
                c.getData();
                c.calculateArea();
                c.giveResult();
            }
            else if (choice2 == 2) {
                c.getData();
                c.calculatePerimeter();
                c.giveResult();
            }
            else if (choice2 == 3) {
                cout << "\nGoing Back To Main Menu..." << endl;
            }
            else {
                cout << "\nInvalid Input" << endl;
            }
            break;
        case 5: 
            correct = false;
            break;
        default:
            cout << "\nInvalid Input";
            break; //closing the statement
    }
   

   } while (correct);
   

};


