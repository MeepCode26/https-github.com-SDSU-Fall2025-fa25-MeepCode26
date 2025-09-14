//
// Created by Debora Velazquez on 9/13/25.
//
#include <iostream>
#include <string>

class Player {
Private:
    std:: string name;
    int score;

public:
    // constructors
    Player(const std::string& n, int startScore) : name(n), score(startScore) {}

    //Getters call for an easier execution and call which avoids having to retype long strings and is more efficient.
    //return player's name
    const std::string getName() const[
        return name;
    }

    //return player's score
    int getScore() const {
        return score;
    }

    //checking to see if player has meet the requirements to win
    bool hasWon(int target) const {
        return score >= target;
    }

    // adding said amount to the player's score
    void addToScore(int amount) {
        score += amount;
    }
}

//here in addMove pass by refernce works becuase it allows for us to move the player to be up to date with the game.
void addMove(Player& who, int step) {
//added a step that only allows for 1, 2, and 3. along with a pass by reference to move the players original direction.
    if (step ! = 1 && step ! = 2 && step ! = 3) {
        std:: cout << "Invalid move. Step must be 1, 2, or 3.";
        return;
    }
    who.addToScore(step);
    std::cout << who.getName() << "'s new score is: " << who.getScore();
}

//though the pointer used here in useBonus() we are able to check and update the current bonus value.
//added a bonus value to increase the players score
void useBonus(int* bonusPtr, Player& who) {
    if (bonusPtr == nullptr) {
        return;
    }
//now here the * represents a dereferencing point with allows to access the true value that was stored in the memory location whereas the pointer is pointing to.
//*bonusPtr is a pointer used to access the value point from bonusPtr to dereference
    if (*bonusPtr <= 0) {
        std::cout << "No bonus available.";
        return;
    }
    who.addToScore(*bonusPtr);
    std::cout << who.getName() <<" used a bonus!! The new score is: " << who.getScore();\
    *bonusPtr = 0;
}
//compStep returns deterministic of the computer to move to 1 or 2 and return to one always.
int compStep() {
    return 1;
}

void addMove(Player& who, int step) {
    if (Step ! = 1 && step ! = 2 && step ! = 3) {
        std::cout << "Invalid move. Step must be 1, 2, or 3.";
        return;
    }
who.addToScore(step);
std::cout <<who.getName() << "'s new score is: " << who.getScore();
}

void useBonus(int* bonusPrt, Player& who) {
    if (bonusPtr == nullptr) {
        return;
    }
    if (*bonusPtr <= 0) {
        std::cout << "No bonus available.";
        return;
    }
    who.addToScore(*bonusPtr);
    std::cout << who.getName() << " used a bonus!! The new score is:  " << who.getScore();
    *bonusPtr = 0;
}

int compStep() {
    return 1;
}
