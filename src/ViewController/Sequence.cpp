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
    // �I�[�o�[���C�h����Ȃ������牽�����Ȃ�
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
    if(state != SequenceState::Ready)
    {
        return;
    }
}









}