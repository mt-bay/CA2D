#include "../Choice.hpp"


namespace model
{


namespace domain
{


Choice::Choice()
{
}


Choice::Choice(const Choice & original)
    :
    waitGraphic(original.waitGraphic),
    activeGraphic(original.activeGraphic)
{
}


Choice & Choice::operator=(const Choice & original)
{
    waitGraphic   = original.waitGraphic;
    activeGraphic = original.activeGraphic;
    return *this;
}

void Choice::Execute()
{

}


}


}