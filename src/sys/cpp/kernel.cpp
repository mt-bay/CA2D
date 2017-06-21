#include <Siv3D.hpp>

#include <fstream>
#include <exception>

#include "../kernel.hpp"

#include "../../model/domain/SequenceState.hpp"

namespace sys
{

Kernel::Kernel()
{
    sequenceStack = std::vector<viewController::Sequence*>();
    loadRequests  = std::queue<s3d::INIReader>();
    currentIndex = 0;
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
            currentIndex = (int)sequenceStack.size() - 1;
        }
    }
}

void Kernel::SequenceEnqueue(s3d::String sequenceIniFile)
{
    loadRequests.push(s3d::INIReader(sequenceIniFile));
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

    ///–¢ŽÀ‘•‚Å‚·
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