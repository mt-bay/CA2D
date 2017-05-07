#include "../PlaySequence.hpp"


namespace viewController
{


PlaySequence::PlaySequence()
{
}


PlaySequence::PlaySequence(CSVReader _csv)
{

}


PlaySequence::PlaySequence(JSONReader _json)
{
    
}


void PlaySequence::OnCreate()
{

}


void PlaySequence::Update()
{
    for(size_t s = 0, cond = autonomyObjects.size(); s < cond; ++s)
    {
        autonomyObjects.at(s).MakeDicision_Autonomy(this, s);
    } 
}


void PlaySequence::UpdateAsync()
{

}


void PlaySequence::Draw()
{
    for each (model::domain::PlayObject o in autonomyObjects)
    {
        o.Draw_Autonomy(this);
    }
}



}