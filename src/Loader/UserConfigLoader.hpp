#pragma once

#include <siv3D.hpp>

namespace mdl
{

namespace persistence
{


class UserConfigLoader
{
	////コンストラクタの明示的削除////
	UserConfigLoader() = delete;
	UserConfigLoader(const UserConfigLoader&) = delete;

	UserConfigLoader& operator=(UserConfigLoader&) = delete;

public:
	///<summary>
	///ユーザ入力データを読み込む
	///</summary>
	static void ReadUserInput();

	///<summary>
	///ユーザ入力データを書き込む
	///</summary>
	static void WriteUserInput();
private:
	///<summary>
	///ユーザ設定ファイルを読み込む
	///</summary>
	static s3d::JSONReader ReadUserConfig();

	///<summary>
	///ユーザ設定ファイルを更新
	///</summary>
	static void WriteUserConfig();
};



}


}
