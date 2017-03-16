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
        LOG_ERROR(L"不明なメニューが選択されました(実行しようとしたメニューindex：", selected, L")");
        Ignore();
    }
}


}


}