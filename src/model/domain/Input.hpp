#pragma once


namespace mdl
{


namespace domain
{


class Input
{

public:
    //// 汎用 ////
    /// <summary>
    /// ←が入力されているか
    /// </summary>
    virtual bool isLeft() = 0;

    /// <summary>
    /// ↓が入力されているか
    /// </summary>
    virtual bool isDown() = 0;
    /// <summary>
    /// ↑が入力されているか
    /// </summary>
    virtual bool isUp() = 0;

    /// <summary>
    /// →が入力されているか
    /// </summary>
    virtual bool isRight() = 0;

    ////選択肢向け////
    /// <summary>
    /// 決定が入力されているか
    /// </summary>
    virtual bool isConfirm();

    /// <summary>
    /// キャンセルが入力されているか
    /// </summary>
    virtual bool isCancel();

    ////
};


}


}