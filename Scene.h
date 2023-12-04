#pragma once
#include "InputHandler.h"
#include "Player.h"

class Scene {
public:
	Scene();

	void Initialize();

	void Update();

	void Draw();

private:
	InputHandler* inputHandler_ = nullptr;
	ICommand* command_ = nullptr;
	
	Player* player_;


};

