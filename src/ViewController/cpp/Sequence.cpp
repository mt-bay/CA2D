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
    //�I�[�o�[���C�h����Ȃ������牽�����Ȃ�
}


void Sequence::UpdateAsync()
{
    //��ԃ`�F�b�N
    if (state != model::domain::SequenceState::Ready)
    {
        return;
    }
}


}