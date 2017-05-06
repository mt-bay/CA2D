#pragma once

#include "Sequence.hpp"
#include "PlaySequence/PlayObject.hpp"

namespace sys
{


namespace seq
{


class PlaySequence : public Sequence
{
    ////�����o////
public:
    ///<summary>�X�e�[�W��Ŏ������Ă���I�u�W�F�N�g</summary>
    std::vector<PlayObject> autonomyObjects;

protected:
    PixelShader* shader;


    ////�R���X�g���N�^////
public:
    ///<summary>
    ///�f�t�H���g�R���X�g���N�^
    ///</summary>
    PlaySequence();

    ///<summary>
    ///CSV�t�@�C����ǂ�ŃC���X�^���X����
    ///</summary>
    ///<param name="_csv">�ǂݍ���CSV�t�@�C��</param>
    PlaySequence(CSVReader _csv);


    ///<summary>
    ///JSON�t�@�C����ǂݍ���ŃC���X�^���X����
    ///</summary>
    ///<param name="_json">�ǂݍ���JSON�t�@�C��</param>
    PlaySequence(JSONReader _json);

    ////���\�b�h////
public:
    ///<summary>
    ///���\�b�h���쐬���̂Ƃ��ɔ񓯊��Ŏ��s�������e
    ///</summary>
    virtual void OnCreate();

    ///<summary>
    ///���t���[���Ăяo����鏈��
    ///</summary>
    virtual void Update();

    ///<summary>
    ///�񓯊��ōs���鏈��
    ///</summary>
    virtual void UpdateAsync();

    ///<summary>
    ///�`��
    ///</summary>
    virtual void Draw();
};


}


}