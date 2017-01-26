#pragma once


#include "Input.hpp"


namespace mdl
{


namespace domain
{


class UserInput : public Input
{
public:
    //// 汎用 ////
    /// <summary>
    /// ←が入力されているか
    /// </summary>
    virtual bool isLeft();

    /// <summary>
    /// ↓が入力されているか
    /// </summary>
    virtual bool isDown();

    /// <summary>
    /// ↑が入力されているか
    /// </summary>
    virtual bool isUp();

    /// <summary>
    /// →が入力されているか
    /// </summary>
    virtual bool isRight();

    /// <summary>
    /// 決定が入力されているか
    /// </summary>
    virtual bool isConfirm();

    /// <summary>
    /// キャンセルが入力されているか
    /// </summary>
    virtual bool isCancel();
};


}


}