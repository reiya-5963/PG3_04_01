#include "Player.h"
#include "Novice.h"

Player::Player() {
}

void Player::Initialize() {

	pos_ = { 640.0f, 320.0f };
	radius_ = 200.0f;
}

void Player::Upadte() {
}

void Player::Draw() {
	Novice::DrawEllipse(int(pos_.x), int(pos_.y), int(radius_), int(radius_), 0.0f, 0xFFFFFFFF, kFillModeSolid);
}

void Player::MoveRight() {
	this->pos_.x += this->speed_;
}

void Player::MoveLeft() {
	this->pos_.x -= this->speed_;
}
