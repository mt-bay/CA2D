#pragma once


#include "Input.hpp"


namespace mdl
{


namespace domain
{


class UserInput : public Input
{
public:
    //// �ėp ////
    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool isLeft();

    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool isDown();

    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool isUp();

    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool isRight();

    /// <summary>
    /// ���肪���͂���Ă��邩
    /// </summary>
    virtual bool isConfirm();

    /// <summary>
    /// �L�����Z�������͂���Ă��邩
    /// </summary>
    virtual bool isCancel();
};


}


}