#include "../UserInput.hpp"

#include <exception>

#include <Siv3D.hpp>


namespace mdl
{


namespace domain
{


void UserInput::Update()
{
    throw std::logic_error("mdl::domain::UserInput::Update‚Í–¢ŽÀ‘•‚Å‚·");
}



size_t UserInput::LeftPressingFrames()
{
    return leftPressingFrames;
}


bool UserInput::IsLeftPressed()
{
    return IsPressed(leftPressingFrames);
}


size_t UserInput::DownPressingFrames()
{
    return downPressingFrames;
}


bool UserInput::IsDownPressed()
{
    return IsPressed(downPressingFrames);
}


size_t UserInput::UpPressingFrames()
{
    return upPressingFrames;
}


bool UserInput::IsUpPressed()
{
    return IsPressed(upPressingFrames);
}


size_t UserInput::RightPressingFrames()
{
    return rightPressingFrames;
}


bool UserInput::IsRightPressed()
{
    return IsPressed(rightPressingFrames);
}


bool UserInput::IsConfirm()
{
    return false;
}


bool UserInput::IsCancel()
{
    return false;
}


inline bool UserInput::IsPressed(size_t _target)
{
    return _target != 0;
}


}


}