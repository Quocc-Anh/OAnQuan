#include <iostream>
#include <math.h>
#include <string.h>
#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player{
	private:
		string name;
		int score = 0;
	public:
		void enterName();
		string getName() const;
		int getScore();
		void setScore(int a);
};

void Player::enterName(){
	getline(cin, name);
}

string Player::getName() const{
	return name;
}


int Player::getScore(){
	return score;
}

void Player::setScore(int a){
	score +=a;
}

#endif //PLAYER_H
