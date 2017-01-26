#include "..\UserConfigLoader.hpp"
namespace mdl
{


namespace persistence
{




void UserConfigLoader::ReadUserInput()
{
	s3d::JSONReader conf = UserConfigLoader::LoadConfig();

	//UserInputのprivate変数にキーやボタンを割り振っていく
}


void UserConfigLoader::WriteUserInput()
{

}


}


}