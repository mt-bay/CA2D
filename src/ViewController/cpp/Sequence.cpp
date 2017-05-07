#include "../Sequence.hpp"

#include "../model/domain/SequenceState.hpp"

namespace viewController
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
    return state;
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
    if (state != SequenceState::Ready)
    {
        return;
    }
}


}