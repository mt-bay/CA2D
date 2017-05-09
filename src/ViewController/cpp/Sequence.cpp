#include "../Sequence.hpp"

#include "../../model/domain/SequenceState.hpp"


namespace viewController
{


Sequence::Sequence
()
{
    state = model::domain::SequenceState::Loading;
}


Sequence::~Sequence
()
{

}


model::domain::SequenceState Sequence::State()
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
    if (state != model::domain::SequenceState::Ready)
    {
        return;
    }
}


}