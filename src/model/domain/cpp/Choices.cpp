#include <Siv3D.hpp>

#include <exception>

#include "../Choices.hpp"


namespace mdl
{


namespace domain
{


void Choises::Execute()
{
    try
    {
        selected < 0 ? Ignore() : choises.at(selected)->Execute();
    }
    catch (std::exception e)
    {
        LOG_ERROR(L"�s���ȃ��j���[���I������܂���(���s���悤�Ƃ������j���[index�F", selected, L")");
        Ignore();
    }
}


}


}