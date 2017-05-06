#pragma once

#include "../../lib/asc/Input.hpp"

#include "Input.hpp"


namespace model
{


namespace domain
{


class UserAscInput : public Input
{
    //// メンバ変数 ////
protected:
    asc::Input asc;

    //// メソッド ////
public:
    
    ///<summary>
    /// 入力状態の取得・更新
    ///</summary>
    [[deprecated]] virtual void Update();

    /// <summary>
    /// ←が入力されているか
    /// </summary>
    virtual bool Left() const;

    /// <summary>
    /// ↓が入力されているか
    /// </summary>
    virtual bool Down() const;

    /// <summary>
    /// ↑が入力されているか
    /// </summary>
    virtual bool Up() const;

    /// <summary>
    /// →が入力されているか
    /// </summary>
    virtual bool Right() const;

    /// <summary>
    /// 決定が入力されているか
    /// </summary>
    virtual bool Confirm() const;

    /// <summary>
    /// キャンセルが入力されているか
    /// </summary>
    virtual bool Cancel() const;

protected:
    enum Direction
    {
        LEFT  = 2u,
        DOWN  = 3u,
        UP    = 1u,
        RIGHT = 0u
    };

    inline bool DirectionCheck(const Direction direction) const;

    
};


}


}