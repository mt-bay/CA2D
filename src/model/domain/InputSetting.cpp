#include "InputSetting.hpp"


namespace mdl
{


namespace domain
{


bool KeyInputSetting::Left()
{
    return left;
}


bool KeyInputSetting::Down()
{
    return down;
}


bool KeyInputSetting::Up()
{
    return up;
}


bool KeyInputSetting::Right()
{
    return right;
}


void KeyInputSetting::Load(const JSONReader& _settingFile)
{
    
}


}


}