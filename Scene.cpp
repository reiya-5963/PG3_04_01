#include "Scene.h"

Scene::Scene() {
}

void Scene::Initialize() {
	inputHandler_ = new InputHandler();

	inputHandler_->AssignMoveRightCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();

	player_ = new Player();
	player_->Initialize();
}

void Scene::Update() {
	command_ = inputHandler_->HandleInput();

	if (this->command_) {
		command_->Exec(*player_);
	}

	player_->Upadte();

}

void Scene::Draw() {

	player_->Draw();
}
