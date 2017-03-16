#include "../UserInput.hpp"

#include <Siv3D.hpp>


namespace mdl
{

namespace domain
{


bool UserInput::isLeft()
{
    return s3d::Input::KeyLeft.pressed;
}


bool UserInput::isDown()
{
    return s3d::Input::KeyDown.pressed;
}

bool UserInput::isUp()
{
    return s3d::Input::KeyUp.pressed;
}

bool UserInput::isRight()
{
    return s3d::Input::KeyRight.pressed;
}

bool UserInput::isConfirm()
{
    return s3d::Key(L'z').pressed;
}


bool UserInput::isCancel()
{
    return s3d::Key(L'x').pressed;
}


}

}