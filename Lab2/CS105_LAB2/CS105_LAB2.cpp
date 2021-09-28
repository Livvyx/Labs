//Olivia Walker
//CS105 Lab 2

/*
* SCENARIO
Suppose that you are part of a team which is creating a role-playing game (RPG).
You have been asked to create the foundational classes to represent player
characters, that is, the entity within the game that the user of the game software
controls.
*/

#include <iostream>
#include <vector>
using namespace std;

enum Race { human, elf, dwarf, orc, troll }; //Race being represented by an enum

class Player { //declaring a class called player
private: //creating a access specifier for holding the data members
    string name; //declaring a string for name
    int hitPoints; //declaring a int for hitpoints
    int magicPoints; //declaring a int for magicpoints
    Race race; //declaring a Race datamember as race.
public://creating a access specifier for holding the member functions
    Player(string n=" ", Race r= human, int h = 0, int m = 0) { //creating a constructor with four parameters corrospondering with the datamembers above (initializing the values)
        //Assigning/initialzing a variable
        name = n; 
        race = r;
        hitPoints = h;
        magicPoints = m;
        
    }
   

    //Created Getter & Setter Member Functions for each datamember
    string getName() { //means returning the value
        return name; //returning the name (value) 
    }
    Race getRace(){
        return race; //returning the race(value)
    }
    int getHitPoints() {
        return hitPoints;
    }
    int getMagicPoints() {
        return magicPoints;
    }
    void setName(string n) { //initializing the value that was given
        name = n; //initializing
    }
    void setRace(Race r) {
        race = r;

    }
    void setHitPoints(int h) {
        hitPoints = h;

    }
    void setMagicPoints(int m) {
        magicPoints = m;
    }
    string whatRace() {
        switch (getRace()) { //creating a switch statement for getRace();
        case human:
            return "Human"; //returning the output for human when selected to human etc
            break;
        case elf:
            return "Elf"; 
            break;
        case dwarf:
            return "Dwarf"; 
            break;
        case orc:
            return "Orc";
            break;
        case troll:
            return "Troll";
            break;
        }
    }
    //This player class member function will return "No Attack Method Defined yet!"
    string attack() {
        return "No attack method defined yet!";
    }
};
//The 3 Derived classes of class Player
class Warrior : public Player {
public: 
    Warrior (){
        setHitPoints(200); 
        setMagicPoints(0);
    }
    
    string attack(){
    return "\nI will destroy you with my sword!";
    }
};
class Priest : public Player{
public: 
    Priest() { //creating a constructor function for priest
        setHitPoints(100); //setting the parameters for setHitPoints to 100
        setMagicPoints(200);//setting the parameters for setmagicpoints to 200
    }
public:
    string attack() { 
        return "\nI will assault you with holy wraith!"; //returning a output for the attack function for priest
    }

};
class Mage : public Player{
public: 
    Mage() {
        setHitPoints(200);
        setMagicPoints(0);
    }

    string attack() {
        return "\nI will crush you with my arcane missiles!";
    }
};
int main() {
    Race r; //creating a variable
    Priest p;
    Mage m;
    Warrior w; //creating a variable

    vector <Warrior> warrior; //creating a vector array
    vector <Priest> priest;
    vector <Mage> mage;

    int choice, choice2;
    string name;

    do { //creating a do and if statement loop for the user
        cout << "\t\tCHARACTER CREATION" << endl; //creating a output for the user
        cout << "Which of the following would you like?" << endl; //creating a output asking the user
        cout << "\t1. Create a Warrior!" << endl;  //creating a output option for the user
        cout << "\t2. Create a Priest!" << endl;
        cout << "\t3. Create a Mage!" << endl;
        cout << "\t4. Finish creating player characters!" << endl; // a output option to end the loop for the user
        cin >> choice; //creating a input for the user

        if (choice >= 1 && choice <= 3) { //creating a if statement allowing them to choose the race after choosing one of the 3 options above
            cout << "Which race do you want?" << endl;
            cout << "\t1. Human!" << endl; //creating a output option for the user
            cout << "\t2. Elf!" << endl;
            cout << "\t3. Dwarf!" << endl;
            cout << "\t4. Orc!" << endl;
            cout << "\t5. Troll!" << endl;
            cin >> choice2; //creating a input for the user

            switch (choice2) { //creating a switch statement from the input from the user for above if statement.
            case 1:
                w.setRace(human);
                break;
            case 2:
                w.setRace(elf);
                break;
            case 3:
                w.setRace(dwarf);
                break;
            case 4:
                w.setRace(orc);
                break;
            case 5:
                w.setRace(troll);
                break;

            }
        }


        switch (choice) { //creating a switch statement for choice one from the users input for choice
        case 1:
            cout << "What would you like to name your character? "; //creating a output question for the user
            cin >> name; // creating a input for name for the user
            w.setName(name); //calling the vector and setname function and the input from the user for " name ".
            w.setRace(w.getRace());
            warrior.push_back(w);
            break; //breaking
        case 2:
            cout << "What would you like to name your character? ";
            cin >> name;
            p.setName(name);
            p.setRace(p.getRace());
            priest.push_back(p);
            break;
        case 3:
            cout << "What would you like to name your character? ";
            cin >> name;
            m.setName(name);
            m.setRace(m.getRace());
            mage.push_back(m);
            break;
        }
    } while (choice != 4);

    cout << "----------------" << endl; //creating a nice output for the user if selected warrior
    cout << "WARRIOR LIST: " << endl;
    cout << "----------------" << endl;

    for (int i = 0; i < warrior.size(); i++) { // if the user chose warrior, below is the output for the input from the user
        cout << "I am a warrior with the name " << warrior[i].getName() << " and with race " << warrior[i].whatRace() << " and my attack is :  " << warrior[i].attack() << endl;
    }

    cout << "----------------" << endl;
    cout << "PRIESTS LIST: " << endl;
    cout << "----------------" << endl;
    for (int i = 0; i < priest.size(); i++) {
        cout << "I am a priest with the name " << priest[i].getName() << " and with race " << priest[i].whatRace() << " and my attack is :  " << priest[i].attack() << endl;
    }
    cout << "----------------" << endl;
    cout << "MAGE LIST: " << endl;
    cout << "----------------" << endl;
    for (int i = 0; i < mage.size(); i++) {
        cout << "I am a mage with the name " << mage[i].getName() << " and with race " << mage[i].whatRace() << " and my attack is :  " << mage[i].attack() << endl;
    }

}
// THE END :)