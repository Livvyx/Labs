//Olivia Walker
//CS105 Lab One

/*Your task is to create a class Yacht that includes the yacht's number and location.*/

#include <iostream> // to use icos function
using namespace std; // to use its class without having to call it

class Location { //declaring a class called location
public: // creating another access modifier to make it publicly accessable

    int latDegrees, longDegrees; //declaring degrees for lat, long & degrees with integers
    float latminutes, longminutes; // declaring lat & long minutes in float
    char  latdirections, longdirections; //declaring lat & long in chars (characters)

    void getpos() { //creating a function

        //FIRST SHIP INPUT
        cout << "Input Degrees between 0 and 180: ";
        cin >> latDegrees;
        cout << "Input the minutes between 0 and 60: ";
        cin >> latminutes;
        cout << "Input direction (E,W,N,S): ";
        cin >> latdirections;
        //Entering input for longitute
        cout << "Input Degrees between 0 and 180: ";
        cin >> longDegrees;
        cout << "Input the minutes between 0 and 60: ";
        cin >> longminutes;
        cout << "Input direction (E,W,N,S): ";
        cin >> longdirections;
        cout << "*********************************************************" << endl;
    }         
    
};
class Yacht { // declaring a class called yacht
public: //Public access modifier to make it publicly accessible
    static int yachtcount;
    int id;
    Location location;

    Yacht(){
        yachtcount++;
        id = yachtcount;
    }
    void display() { //creating a function
        cout << "The Ships Serial Numer: " << id << endl;
        cout << "And its positions is: " << location.latDegrees << "\xF8" << location.latminutes << " " << location.latdirections << " Latitude " << location.longDegrees << "\xF8" << location.longminutes << location.longdirections << " Longitude " << endl;

    }
   
};

int Yacht::yachtcount = 0; //declaring the yacht counter

int main()
{
    Yacht yacht1_Obj; // declaring yacht object with yacht class
    Yacht yacht2_Obj; // declaring a second yacht object
    Yacht yacht3_Obj; // declaring a third yacht object

  
    cout << "\nEnter the first location of the first ship: " << endl;
    yacht1_Obj.location.getpos(); //calling the object from the class location function
   
    cout << "\nEnter the second location of the second ship: " << endl;
    yacht2_Obj.location.getpos(); //calling the object from the class location function

    cout << "\nEnter the third location of the third ship: " << endl;
    yacht3_Obj.location.getpos(); //calling the object from the class location function
    /*yacht1_Obj.location.getpos();*/
    cout << "\n******************Welcome to ocean race 2021-22******************" << endl;
    yacht1_Obj.display();
    yacht2_Obj.display(); 
    yacht3_Obj.display();
}
