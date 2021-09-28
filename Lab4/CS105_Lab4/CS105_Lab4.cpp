
//Olivia Walker

//Lab 4 


#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

class Alien {
//private: - was creating a error?
    int height;
    int weight;
    char gender;
    int genderPoints;

public:
    Alien(int defNum = 0, char defChar = ' ') { //creating a default constructor
         height = defNum;
         weight = defNum;
         gender = defChar;
        
    };
    Alien(int h, int w, char g) { //constructor with paramaters
        height = h;
        weight = w;
        gender = g;
    };

    int getWeight() {
        return weight;
    }
    int getHeight() {
        return height;
    }
    char getGender() {
        return gender;
    }
    int getPrestige() {
        if (gender == 'M') // if it equals 2 it is a male
            genderPoints = 2;
        else
            genderPoints = 3; // if equals to 3 it is a female

        return height * weight * genderPoints;
    }
    Alien operator+(const Alien& a) { // assiging to constant & creating a operator (accessing/Getting data)
        Alien alien;
        int randNum;
        srand(time(0)); //allows the user to get different number instead of the same
        randNum = rand() % 100 + 1; //between 1 & 100

        alien.height = (this->height + a.height) / 2;//passing alien through the operator and dividing by 2
        alien.weight = (this->weight + a.weight) / 2; //passing alien through the operator and dividing by 2
        if (randNum <= 50) 
            alien.gender = 'M';
        else
            alien.gender = 'F';
        return alien; //returning alien
    }
    Alien& operator=(const Alien& a) { //overloading 
        this->height = a.height; //overloading the assignment operator (const Alien& a). assigning alien to a
        this->weight = a.weight; //overloading the assignment operator (const Alien& a). assigning alien to a
        this->gender = a.gender; //overloading the assignment operator (const Alien& a). assigning alien to a
        return *this; //returning this alien
    }
    bool operator==(Alien& a) { // checking if the two aliens are the same with the == operator
        Alien alien;
        if (alien.getPrestige() == a.getPrestige()) //checking if the two aliens have the same prestige
            return true; //if the same returns true
        else return false; //if not the same returns false
    }
    bool operator!=(Alien& a) { // checking if the two aliens are the same with the != operator
        Alien alien;
        if (alien.getPrestige() != a.getPrestige()) //checking if the two aliens have the same prestige
            return true; //if the same returns true
        else return false; //if not the same returns false
    }
    bool operator>=(Alien& a) { // checking if the two aliens are the same with the >= operator
        Alien alien;
        if (alien.getPrestige() >= a.getPrestige()) //checking if the two aliens have the same prestige
            return true; //if the same returns true
        else return false; //if not the same returns false
    }
    bool operator<=(Alien& a) { // checking if the two aliens are the same with the <= operator
        Alien alien;
        if (alien.getPrestige() <= a.getPrestige()) //checking if the two aliens have the same prestige
            return true; //if the same returns true
        else return false; //if not the same returns false
    }
    bool operator<(Alien& a) { // checking if the two aliens are the same with the < operator
        Alien alien;
        if (alien.getPrestige() < a.getPrestige()) //checking if the two aliens have the same prestige
            return true; //if the same returns true
        else return false; //if not the same returns false
    }
    bool operator>(Alien& a) { // checking if the two aliens are the same with the > operator
        Alien alien;
        if (alien.getPrestige() > a.getPrestige()) //checking if the two aliens have the same prestige
            return true; //if the same returns true
        else return false; //if not the same returns false
    }

    vector<Alien>& createAlien(vector<Alien>& alien) { //creating an alien for the menu (create alien pairs)
        Alien a1(1, 2, 'M');
        Alien a2(3, 4, 'F');
        Alien a3(5, 6, 'M');
        Alien a4(7, 8, 'F');
        alien.push_back(a1);
        alien.push_back(a2);
        alien.push_back(a3);
        alien.push_back(a4);
        return alien;
    }
};
int main()
{
    int option;
    bool isTrue = true;
    vector<Alien>alien;
    Alien a;
     do {
        cout << "\n\tMain Menu:" << endl;
        cout << "\n\t1. Create Alien pairs." << endl;
        cout << "\n\t2. Create Alien Offspring." << endl;
        cout << "\n\t3. Compare Alien Offspring Presige." << endl;
        cout << "\n\t4. Exit" << endl;

        cout << "\n\tPlease Enter Your Option: ";
        cin >> option;

        switch (option) {
        case 1:
            alien = a.createAlien(alien); //created 4 aliens
            cout << "\n\tAlien Created" << endl;
            break;
        case 2:
            if (alien.size() == 0)
                alien = a.createAlien(alien);
            alien.push_back(a = alien[0] + alien[1]); //accessing 2 aliens from the alien vector & adding together using the overloading operator+
            alien.push_back(a = alien[2] + alien[3]); //accessing 2 aliens from the alien vector & adding together using the overloading operator+
            cout << "\n\tOffspring Alien Is Created!" << endl;
            break;
        case 3:
            cout << "\n\tOffspring Prestige Comparison" << endl;
            cout << "Alien 5 == Alien 6 ? ";
            if (alien[4] == alien[5])
                cout << "True" << endl;
            else
                cout << "False" << endl;

            cout << "Alien 5 != Alien 6 ? ";
            if (alien[4] != alien[5])
                cout << "True" << endl;
            else
                cout << "False" << endl;

            cout << "Alien 5 > Alien 6 ? ";
            if (alien[4] > alien[5])
                cout << "True" << endl;
            else
                cout << "False" << endl;

            cout << "Alien 5 >= Alien 6 ? ";
            if (alien[4] >= alien[5])
                cout << "True" << endl;
            else
                cout << "False" << endl;

            cout << "Alien 5 < Alien 6 ? ";
            if (alien[4] < alien[5])
                cout << "True" << endl;
            else
                cout << "False" << endl;

            cout << "Alien 5 <= Alien 6 ? ";
            if (alien[4] <= alien[5])
                cout << "True" << endl;
            else
                cout << "False" << endl;
            break;
        case 4: 
            cout << "Program is Exitting" << endl;
            isTrue = false;
            break;

        default:
            cout << "Error";
            break;
        }
    } while (isTrue);





}


