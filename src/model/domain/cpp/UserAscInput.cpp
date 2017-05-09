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


bool UserAscInput::Left() const
{
    return DirectionCheck(Direction::LEFT);
}



bool UserAscInput::Down() const
{
    return DirectionCheck(Direction::DOWN);
}


bool UserAscInput::Up() const
{
    return DirectionCheck(Direction::UP);
}


bool UserAscInput::Right() const
{
    return DirectionCheck(Direction::RIGHT);
}


bool UserAscInput::Confirm() const
{
    return asc.button(L"Confirm").clicked;
}


bool UserAscInput::Cancel() const
{
    return asc.button(L"Cancel").clicked;
}


bool UserAscInput::DirectionCheck(const Direction direction) const
{
    Optional<uint32> d =  asc.as4Direction(L"Lx", L"Ly");
    return d.has_value() ? false : d.value() == (unsigned int)direction;
}


}


}