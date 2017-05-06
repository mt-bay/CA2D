#pragma once


namespace model
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
    virtual bool Left() = 0;

    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool Down() = 0;
    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool Up() = 0;

    /// <summary>
    /// �������͂���Ă��邩
    /// </summary>
    virtual bool Right() = 0;

    ////�I��������////
    /// <summary>
    /// ���肪���͂���Ă��邩
    /// </summary>
    virtual bool Confirm();

    /// <summary>
    /// �L�����Z�������͂���Ă��邩
    /// </summary>
    virtual bool Cancel();

    ////
};


}


}