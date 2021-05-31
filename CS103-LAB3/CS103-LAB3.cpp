
//Olivia Walker 

//Lab 3 Assignment - Pointers

/*Two players dice game,
1. it is a text interface game. 
2. The game allows the players to set pre maximum score.
3. Each player has two 6 face dice to roll, and the players get turns to earn score. 
4. Players must feed their names and pre-set the maximum score before play. */

#include <iostream>
#include <string>
using namespace std;

void Options() {

	cout << "\n1. Instruction" << endl;
	cout << "2. Set Maximum Score" << endl;
	cout << "3. Read Players" << endl;
	cout << "4. Play" << endl;
	cout << "5. Display ScoreBoard" << endl;
	cout << "6. End" << endl;
}


int main()
{
	cout << "Two Players Dice Game - - Pre Set Maximum Score" << endl;
	cout << "************************************************" << endl;
	Options();


	int option;
	int score;
	string player1;
	string player2;
	cout << "Enter Your Option: ";
	cin >> option;

	if (option == 1) {

		cout << "\n\t\t\tInstructions" << endl;
		cout << "***********************************************************************************" << endl;
		cout << "\t1. Players Must Feed Their Names And Pre-Set The Maximum Score Before Game Starts." << endl;
		cout << "\t2. Each Player Has Two 6 Face Dice To Roll, And The Players Get Turns To Earn Score." << endl;
		cout << "\t3. For Each Roll, Dice 1 And Dice 2 Values Will Be Added For The Corresponding Players." << endl;
		cout << "\t4. If Both Dice Values Are Same Then The Score Will Be Two Times The Sum Of The Value." << endl;
		cout << "\t\t E.G : Dice 1 Returns 2 And Dice 2 Returns 2 Then 2 + 2 = 4 * 2 = 8;" << endl;
		cout << "\t5. Whoever Reaches The Macimum Score First Will Be Declared Winner," << endl << "\t\yAnd The Game Will Be Finished." << endl;
		cout << "\t6. After Each Roll, Each Player Score Board Will Be Updated And Displayed." << endl;
		cout << "***********************************************************************************" << endl;
		
	}
	else if (option == 2) {
		/*cout << "Enter Your Option: ";
		cin >> option;*/
		cout << "Enter Your Maximum Score: ";
		cin >> score;
	}
	else if (option == 3) {
		cout << "Enter Player1 Name: ";
		cin >> player1;
		cout << "Enter Player2 Name: ";
		cin >> player2;

	}
	else if (option == 4) {

	}
	else if (option == 5) {
		cout << "\n\t\t\tScore Board" << endl;
		cout << "***********************************************************************************" << endl;
	}
	else if (option == 6) {
		cout << "\n\t\t\tEnd Of Game" << endl;
		cout << "***********************************************************************************" << endl;
	}
}


