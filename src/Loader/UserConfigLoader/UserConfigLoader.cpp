#include "..\UserConfigLoader.hpp"
namespace mdl
{


namespace persistence
{




void UserConfigLoader::ReadUserInput()
{
	s3d::JSONReader conf = UserConfigLoader::LoadConfig();

	//UserInput��private�ϐ��ɃL�[��{�^��������U���Ă���
}


void UserConfigLoader::WriteUserInput()
{

}


}


}