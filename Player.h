#pragma once
#include "Vector2.h"

/// <summary>
/// プレイヤー
/// </summary>
class Player {
public:
	// コンストラクタ
	Player();

	/// <summary>
	/// 初期化処理
	/// </summary>
	void Initialize();

	/// <summary>
	/// 更新処理
	/// </summary>
	void Upadte();

	/// <summary>
	/// 描画処理
	/// </summary>
	void Draw();

	//// キーごとのコマンド ////

	/// <summary>
	/// 右に動く
	/// </summary>
	void MoveRight();

	/// <summary>
	/// 左にうごく
	/// </summary>
	void MoveLeft();
private:
	Vector2 pos_;

	float speed_ = 1.0f;

	float radius_ = 3.0f;

};

