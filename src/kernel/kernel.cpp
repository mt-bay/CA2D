#include <Siv3D.hpp>

#include <fstream>
#include <exception>

#include "../kernel.hpp"

#include "../s3d_tools/csv_util.hpp"

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
    ///–¢ŽÀ‘•‚Å‚·
}


void Kernel::GenerateSequence()
{
    ///–¢ŽÀ‘•‚Å‚·
}


int Kernel::GetNewSequenceIndex()
{
    for(int i = sequenceStack.size() - 1; i > 0; --i)
    {
        if(sequenceStack.at(i)->State == SequenceState::Ready)
        {
            return i;
        }
    }
    return -1;
}


}