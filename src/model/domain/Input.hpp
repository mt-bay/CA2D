#pragma once


namespace mdl
{


namespace domain
{


class Input
{

public:
    //// �ėp ////
    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool isLeft() = 0;

    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool isDown() = 0;
    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool isUp() = 0;

    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool isRight() = 0;

    ////�I��������////
    /// <summary>
    /// ���肪���͂���Ă��邩
    /// </summary>
    virtual bool isConfirm();

    /// <summary>
    /// �L�����Z�������͂���Ă��邩
    /// </summary>
    virtual bool isCancel();

    ////
};


}


}