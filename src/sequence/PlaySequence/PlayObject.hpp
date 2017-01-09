#pragma once
#include <Siv3D.hpp>

#include <vector>
#include <map>
#include "2D.hpp"

#include "../PlaySequence.hpp"
#include "PlayObject/PlayObjectType.hpp"
namespace sys
{


namespace seq
{


enum PlayObjectType;


///<summary>
/// ���PlaySequence�Ŏg���I�u�W�F�N�g�̊�{�N���X
///</summary>
class PlayObject
{
    //�����o�ϐ�
public:
    ///<summary>���̃I�u�W�F�N�g��3D���f��</summary>
    Model model;
    ///<summary>���̃I�u�W�F�N�g�̃e�N�X�`��</summary>
    Texture texture;

    ///<summary>�ʒu</summary>
    Vector3D<double> position;

    ///<summary>���̃I�u�W�F�N�g���������Ă���I�u�W�F�N�g</summary>
    std::vector<PlayObject*> possession;
protected:
    ///<summary>�I�u�W�F�N�g�̎��</summary>
    PlayObjectType type;

    ///<summary>�����x</summary>
    Vector3D<double> accel;


    //�A�N�Z�b�T
public:
    ///<summary>type�擾</summary>
    ///<returns>���̃C���X�^���X��type</returns>
    PlayObjectType GetType();

    //���\�b�h
public:
    ///<summary>
    ///�C���X�^���X�������ɔ񓯊��ŌĂяo����郁�\�b�h
    virtual void
    OnCreate
        ();


    ///<summary>
    ///�I�u�W�F�N�g���������Ă���(�����ɏ�������Ă����Ԃł͂Ȃ�)�ۂ̈ӎv����
    ///</summary>
    virtual void
    MakeDicision_Autonomy
        (const PlaySequence* _caller, const size_t _thisIndex);

    ///<summary>
    ///�I�u�W�F�N�g�������ɏ�������Ă���ۂ̈ӎv����
    ///</summary>
    virtual void
    MakeDicision_IsEquipped
        (const PlaySequence*              _caller,
         const PlayObject*                _possessor,
         const std::map<mt::tstring, int> _operation);

    ///<summary>
    ///�I�u�W�F�N�g���������Ă���(�����ɏ�������Ă����Ԃł͂Ȃ�)�ۂ̈ړ�����
    ///</summary>
    virtual void
    Move_Autonomy
        (PlaySequence* _caller);

    ///<summary>
    ///�I�u�W�F�N�g���������Ă���(�����ɏ�������Ă����Ԃł͂Ȃ�)�ۂ̕`��
    ///</summary>
    virtual void
    Draw_Autonomy
        (const PlaySequence* _caller)
        const;

    ///<summary>
    ///�I�u�W�F�N�g�������ɏ�������Ă���ۂ̕`��
    ///</summary>
    virtual void
        Draw_IsEquipped
        (const PlaySequence*     _caller,
         const Vector3D<double>& _absolutePosition)
        const;

    ///<summary>
    ///�Փ˔���
    ///</summary>
    ///<param name=""
    virtual Vector3D<double>
    IsCollision(PlayObject* _target);
};





}


}