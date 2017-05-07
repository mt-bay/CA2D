#include <Siv3D.hpp>

#include <fstream>
#include <exception>

#include "../kernel.hpp"

#include "../s3d_tools/csv_util.hpp"
#include "../model/domain/SequenceState.hpp"

namespace sys
{


void Kernel::Init()
{

}


void Kernel::MainProcess()
{
    while(!sequenceStack.empty())
    {
        try
        {
            if(currentIndex >= 0)
            {
                Update();
                Draw();
            }

            currentIndex = GetNewSequenceIndex();
        }
        catch(std::out_of_range e)
        {
            LOG_ERROR(e.what());
            currentIndex = sequenceStack.size() - 1;
        }
    }
}


void Kernel::Update()
{
    sequenceStack.at((size_t)currentIndex)->Update();
}


void Kernel::Draw()
{
    sequenceStack.at((size_t)currentIndex)->Draw();
}


void Kernel::DeleteSequence()
{
    for(int i = 0; i < sequenceStack.size();)
    {
        if(sequenceStack.at(i)->State() == model::domain::SequenceState::ReadyToDestroy)
        {
            delete sequenceStack.at(i);
            sequenceStack.erase(sequenceStack.begin() + i);
        }
        else
        {
            ++i;
        }
    }
}


void Kernel::GenerateSequence()
{

    ///�������ł�
}


int Kernel::GetNewSequenceIndex()
{
    for(int i = (int)sequenceStack.size() - 1; i > 0; --i)
    {
        if(sequenceStack.at((size_t)i)->State() == model::domain::SequenceState::Ready)
        {
            return i;
        }
    }
    return -1;
}


}