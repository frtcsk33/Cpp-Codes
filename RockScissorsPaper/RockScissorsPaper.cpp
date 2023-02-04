#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROCK = 1;
const int PAPER = 2;
const int SCISSORS = 3;

int userChoice = 0;

int getComputerChoice(){


    srand(time(NULL));
    int choice = rand() % 3 + 1;

    
    cout<<endl<<endl<<"computer choice --> "<<choice<<endl<<endl<<endl;
    return choice;
}


void determineWinner(int compChoice, int userChoice){

    if(compChoice == ROCK && userChoice == PAPER){
        cout<<"User win! paper wraps rock"<<endl;
    }
    else if(compChoice == PAPER && userChoice == ROCK){
        cout<<"Computer win! paper wraps rock!"<<endl;
    }
    else if(compChoice == SCISSORS && userChoice == PAPER){
        cout<<"Computer win! Scissors cut paper"<<endl;
    }
    else if(compChoice == SCISSORS && userChoice == ROCK){
        cout<<"User win! rock smashes scissors"<<endl;
    }
    else if(compChoice == PAPER && userChoice == SCISSORS){
        cout<<"user win! scissors cut paper"<<endl;
    }
    else if(compChoice == ROCK && userChoice == SCISSORS){
        cout<<"Computer win! rock smashes Scissors"<<endl;
    }
    else
    {
        cout<<"Tie!"<<endl;
    }


}




void displayChoice(int choice){
    string result;

    if(choice == ROCK){
        result = "Rock";
    }
    else if(choice == PAPER){
        result = "Paper" ;
    }
    else{
        result = "Scissors";
    }

    cout<<" "<<result<<endl;
}



int main(){
    

    
    int compChoice;

    cout<<"\t "<<"Rock Paper Scissors"<<endl;
    cout<<"Game Menu"<<endl;
    cout<<"---------"<<endl;
    cout<<"1. Rock"<<endl;
    cout<<"2. Paper"<<endl;
    cout<<"3. Scissors"<<endl;
    cout<<"Enter your choice:  ";
    cin >> userChoice;
    cout<<"you selected: "<<userChoice;
    displayChoice(userChoice);


    compChoice = getComputerChoice();
    
    cout<<"computer selected: ";
    displayChoice(compChoice);

    determineWinner(compChoice, userChoice);

    scanf(" ");
    return 0;
}