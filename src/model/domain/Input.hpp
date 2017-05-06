#pragma once


namespace model
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
    virtual bool Left() = 0;

    /// <summary>
    /// ↓が入力されているか
    /// </summary>
    virtual bool Down() = 0;
    /// <summary>
    /// ↑が入力されているか
    /// </summary>
    virtual bool Up() = 0;

    /// <summary>
    /// →が入力されているか
    /// </summary>
    virtual bool Right() = 0;

    ////選択肢向け////
    /// <summary>
    /// 決定が入力されているか
    /// </summary>
    virtual bool Confirm();

    /// <summary>
    /// キャンセルが入力されているか
    /// </summary>
    virtual bool Cancel();

    ////
};


}


}