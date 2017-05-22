#include "../UserAscInput.hpp"

#include <exception>

#include <Siv3D.hpp>


namespace model
{


namespace domain
{


void UserAscInput::Update()
{
    
    throw std::logic_error("mdl::domain::UserInput::Update‚Í–¢ŽÀ‘•‚Å‚·");
}


bool UserAscInput::Direction4Left() const
{
    return Direction4Check(Direction4::Left);
}


bool UserAscInput::Direction4Down() const
{
    return Direction4Check(Direction4::Down);
}


bool UserAscInput::Direction4Up() const
{
    return Direction4Check(Direction4::Up);
}


bool UserAscInput::Direction4Right() const
{
    return Direction4Check(Direction4::Right);
}


bool UserAscInput::Direction8Down() const
{
    return Direction8Check(Direction8::Down);
}


bool UserAscInput::Direction8DownerRight() const
{
    return Direction8Check(Direction8::DownerRight);
}


bool UserAscInput::Direction8Right() const
{
    return Direction8Check(Direction8::Right);
}


bool UserAscInput::Direction8UpperRight() const
{
    return Direction8Check(Direction8::UpperRight);
}


bool UserAscInput::Direction8Up() const
{
    return Direction8Check(Direction8::Up);
}


bool UserAscInput::Direction8UpperLeft() const
{
    return Direction8Check(Direction8::UpperLeft);
}


bool UserAscInput::Direction8Left() const
{
    return Direction8Check(Direction8::Left);
}


bool UserAscInput::Direction8DownerLeft() const
{
    return Direction8Check(Direction8::DownerLeft);
}


bool UserAscInput::Confirm() const
{
    return asc.button(L"Confirm").clicked;
}


bool UserAscInput::Cancel() const
{
    return asc.button(L"Cancel").clicked;
}


bool UserAscInput::Direction4Check(const Direction4 direction) const
{
    Optional<uint32> d =  asc.as4Direction(L"Lx", L"Ly");
    return d.has_value() ? false : d.value() == (unsigned int)direction;
}


bool UserAscInput::Direction8Check(const Direction8 direction) const
{
    Optional<uint32> d = asc.as8Direction(L"Lx", L"Ly");
    return d.has_value() ? false : d.value() == (unsigned int)direction;
}


}


}