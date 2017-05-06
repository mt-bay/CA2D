#pragma once


#include "Choice.hpp"


namespace model
{


namespace domain
{


class Choises
{
    //// �����o�ϐ� ////
protected:
    int                  selected;
    std::vector<Choice*> choises;

    /// <summary>�I�������X�g�̏㒆���̈ʒu</summary>
    s3d::Vector2D<int>   upperCenter;

    ///<summary>�\������s��</summary>
    unsigned int visibleRowNum;

    ///<summary>��</summary>
    unsigned int columnNum;
public:
    ///<summary>
    /// ��
    ///</summary>
    virtual void Left() = 0;

    ///<summary>
    /// ��
    ///</summary>
    virtual void Down() = 0;

    ///<summary>
    /// ��
    ///</summary>
    virtual void Up() = 0;

    ///<summary>
    /// ��
    ///</summary>
    virtual void Right() = 0;

    ///<summary>
    ///�I�𒆂̗v�f�����s
    ///</summary>
    virtual void Execute();

    ///<summary>
    ///�I�𒆂̗v�f�����s�ł��Ȃ��ꍇ�̏���
    ///</summary>
    virtual void Ignore();


protected:

};


}


}