#include "Player.h"
#include "TextureManager.h"
#include <cassert>
void Player::Initialize() {
	textureHandle_ = TextureManager::Load("mario.jpg");
	sprite_ = Sprite::Create(textureHandle_, {100, 50});
	model_ = Model::Create();
	worldTransform_.Initialize();
	viewProjection_.Initialize();
}
Player::Player() {
	textureHandle_ = 0u;
	sprite_ = nullptr;
	model_ = nullptr;
	worldTransform_;
	viewProjection_;
}
	Player::~Player() {
	delete sprite_;
	delete model_;
}
void Player::Draw() { model_->Draw(worldTransform_, viewProjection_, textureHandle_); }