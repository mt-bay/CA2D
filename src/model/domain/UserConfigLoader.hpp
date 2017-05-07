#pragma once

#include <siv3D.hpp>

namespace mdl
{

namespace persistence
{


class UserConfigLoader
{
	////�R���X�g���N�^�̖����I�폜////
	UserConfigLoader() = delete;
	UserConfigLoader(const UserConfigLoader&) = delete;

	UserConfigLoader& operator=(UserConfigLoader&) = delete;

public:
	///<summary>
	///���[�U���̓f�[�^��ǂݍ���
	///</summary>
	static void ReadUserInput();

	///<summary>
	///���[�U���̓f�[�^����������
	///</summary>
	static void WriteUserInput();
private:
	///<summary>
	///���[�U�ݒ�t�@�C����ǂݍ���
	///</summary>
	static s3d::JSONReader ReadUserConfig();

	///<summary>
	///���[�U�ݒ�t�@�C�����X�V
	///</summary>
	static void WriteUserConfig();
};



}


}
