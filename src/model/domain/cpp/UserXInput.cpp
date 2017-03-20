#include "../UserXInput.hpp"

#include <Siv3D.hpp>



namespace mdl
{


namespace domain
{


UserXInput::UserXInput(s3d::uint32 _userIndex)
    : input(XInput(_userIndex))
{
}


UserXInput::UserXInput(const UserXInput & _original)
    : input(XInput(_original.input))
{
}


s3d::Vector2D<double> UserXInput::AnalogStickL()
{
    return s3d::Vector2D<double>(input.leftThumbX, input.leftThumbY);
}

s3d::Vector2D<double> UserXInput::AnalogStickR()
{
    return s3d::Vector2D<double>(input.rightThumbX, input.rightThumbY);
}

s3d::Key UserXInput::Left()
{
    return input.buttonLeft;
}

s3d::Key UserXInput::Down()
{
    return input.buttonDown;
}

s3d::Key UserXInput::Up()
{
    return input.buttonUp;
}

s3d::Key UserXInput::Right()
{
    return input.buttonRight;
}

s3d::Key UserXInput::Confirm()
{
    return input.buttonA;
}

s3d::Key UserXInput::Cancel()
{
    return input.buttonB;
}

}


}