#pragma once

#include "../model/domain/Input.hpp"

namespace viewController
{

//�O���錾
enum SequenceState;


///<summary>
///�S�V�[�P���X�̊��N���X
///</summary>
class Sequence
{
    ////�����o�ϐ�////
protected:
    ///<summary>
    ///�I�u�W�F�N�g�̏��
    ///</summary>
    SequenceState state;
    model::domain::Input* input;

    ////�R���X�g���N�^�E�f�X�g���N�^////
public:
    ///<summary>
    ///�R���X�g���N�^
    ///</summary>
    Sequence();
    
    ///<summary>
    ///�f�X�g���N�^
    ///</summary>
    virtual ~Sequence();

    ////Getter, Setter////
    ///<return>
    ///���g�̏�Ԃ�Ԃ�
    ///</return>
    virtual SequenceState State();

    ////���\�b�h////
    ///<summary>
    ///�I�u�W�F�N�g�̔j�������肵���ۂɔ񓯊��ŊJ�n����鏈��
    ///</summary>
    virtual void OnDestory();

    ////����////
    // �ӎv����, �ړ��Ȃǂ̏���
    ///<summary>
    ///�t���[�����Ƃ̏���
    ///</summary>
    virtual void Update() = 0;

    ///<summary>
    ///�񓯊��ōs������<br />
    ///��{�I��1�t���[���Ŏ��܂�Ȃ�������������ōs��
    ///</summary>
    virtual void UpdateAsync();

    ///<summary>
    ///�`��
    ///</summary>
    virtual void Draw() = 0;
};


}