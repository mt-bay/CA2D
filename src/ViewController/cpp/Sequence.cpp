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
    //�I�[�o�[���C�h����Ȃ������牽�����Ȃ�
}


void Sequence::UpdateAsync()
{
    //��ԃ`�F�b�N
    if (state != SequenceState::Ready)
    {
        return;
    }
}


}