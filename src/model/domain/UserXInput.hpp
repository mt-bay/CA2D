#pragma once

#include "ControllerInput.hpp"

namespace mdl
{


namespace domain
{


class UserXInput : public ControllerInput
{
    //// �����o ////
private:
    s3d::XInput input;

    //// �R���X�g���N�^ ////
public:
    ///<summary>
    ///�f�t�H���g�R���X�g���N�^�͍폜
    ///</summary>
    UserXInput() = delete;

    ///<summary>
    ///���[�U�ԍ���ݒ肵�ď�����
    ///</summary>
    UserXInput(s3d::uint32 _userIndex);

    ///<summary>
    ///�R�s�[�R���X�g���N�^
    ///</summary>
    UserXInput(const UserXInput& _original);

    //// ���\�b�h ////
public:
    //�A�i���O�X�e�B�b�N
    ///<summary>
    ///�A�i���O�X�e�B�b�N(��)�̏��
    ///</summary>
    ///<returns>�A�i���O�X�e�B�b�N(��)�̏��</returns>
    virtual s3d::Vector2D<double> AnalogStickL();

    ///<summary>
    ///�A�i���O�X�e�B�b�N(�E)�̏��
    ///</summary>
    ///<returns>�A�i���O�X�e�B�b�N(�E)�̏��</returns>
    virtual s3d::Vector2D<double> AnalogStickR();

    //�\���L�[
    ///<summary>
    ///�\���L�[��
    ///</summary>
    ///<returns>�\���L�[��</returns>
    virtual s3d::Key Left();

    ///<summary>
    ///�\���L�[��
    ///</summary>
    ///<returns>�\���L�[��</returns>
    virtual s3d::Key Down();

    ///<summary>
    ///�\���L�[��
    ///</summary>
    ///<returns>�\���L�[��</returns>
    virtual s3d::Key Up();

    ///<summary>
    ///�\���L�[�E
    ///</summary>
    ///<returns>�\���L�[�E</returns>
    virtual s3d::Key Right();

    //���j���[�p�{�^��
    ///<summary>
    ///����{�^��
    ///</summary>
    ///<returns>����{�^��</returns>
    virtual s3d::Key Confirm();

    ///<summary>
    ///�L�����Z���{�^��
    ///</summary>
    ///<returns>�L�����Z���{�^��</returns>
    virtual s3d::Key Cancel();
};


}


}