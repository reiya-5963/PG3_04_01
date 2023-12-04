#include "ICommand.h"

ICommand::~ICommand() {
}

void MoveLeftCommand::Exec(Player& player) {
	player.MoveLeft();
}

void MoveRightCommand::Exec(Player& player) {
	player.MoveRight();
}