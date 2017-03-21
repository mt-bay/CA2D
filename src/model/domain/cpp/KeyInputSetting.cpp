#include "../KeyInputSetting.hpp"


namespace mdl
{


namespace domain
{


s3d::Key KeyInputSetting::Left()
{
    return left;
}


s3d::Key KeyInputSetting::Down()
{
    return down;
}


s3d::Key KeyInputSetting::Up()
{
    return up;
}


s3d::Key KeyInputSetting::Right()
{
    return right;
}

s3d::Key KeyInputSetting::Confirm()
{
    return confirm;
}

s3d::Key KeyInputSetting::Cancel()
{
    return cancel;
}


void KeyInputSetting::Load(const JSONReader& _settingFile)
{
    
}


}


}