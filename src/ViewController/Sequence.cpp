#include "Sequence.hpp"


namespace sys
{


Sequence::Sequence
    ()
{
    state = SequenceState::Loading;
}


Sequence::~Sequence
    ()
{

}


SequenceState Sequence::State()
{
    return SequenceState();
}


void
Sequence::OnCreate
()
{
    // オーバーライドされなかったら何もしない
}


void
Sequence::OnDestory
()
{
    //オーバーライドされなかったら何もしない
}


void Sequence::UpdateAsync()
{
    //状態チェック
    if(state != SequenceState::Ready)
    {
        return;
    }
}









}