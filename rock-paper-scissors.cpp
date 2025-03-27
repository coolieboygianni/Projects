#include <iostream>
#include <cstdlib>
using namespace std;


string user_choice;
string computer_choice;
string result;
int computer_choice_num;

int main(){
    cout << "Welcome to Rock-Paper-Scissors! " << endl;
    cout << "Instructions: Rock vs Scissor -> Rock wins, Rock vs Paper -> Paper wins, Paper vs Scissor -> Scissor wins" << endl;

    computer_choice_num =  rand() % 3 + 1;
    if (computer_choice_num == 1) {
        computer_choice = "Rock";
    } else if (computer_choice_num == 2) {
        computer_choice = "Paper";
    } else {
        computer_choice = "Scissors";
    }

    cout << "Enter a choice (Rock, Paper, Scissors, Cap sensitive): ";
    cin >> user_choice;
    while (user_choice != "Rock" && user_choice != "Paper" && user_choice != "Scissors") {
        cout << "Invalid choice, please enter again: " << endl;
        cin >> user_choice;
    }
    if (user_choice == computer_choice) {
        result = "It is a tie"; 
    } else if (user_choice == "Rock" && computer_choice == "Scissors"){
        result = "You win!"; 
    } else if (user_choice == "Rock" && computer_choice == "Paper"){
        result = "Computer wins!";
    } else if (user_choice == "Paper" && computer_choice == "Rock"){
        result = "You win!";
    } else if (user_choice == "Paper" && computer_choice == "Scissors"){
        result = "Computer wins!";
    } else if (user_choice == "Scissors" && computer_choice == "Paper"){
        result = "You win!";
    } else if (user_choice == "Scissors" && computer_choice == "Rock"){
        result = "Computer wins!";
    }

    cout << "You chose: " + user_choice;
    cout << "\nComputer chose: " + computer_choice;
    cout << "\nResult: " + result;

   
    cout << "\nThank you for playing! Goodbye!" << endl;
    
    return 0;
}


 

