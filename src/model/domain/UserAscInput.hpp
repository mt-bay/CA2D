#pragma once

#include "../../lib/asc/Input.hpp"

#include "Input.hpp"


namespace model
{


namespace domain
{




class UserAscInput : public Input
{
    enum Direction4
    {
        DOWN = 0u,
        RIGHT = 1u,
        UP = 2u,
        LEFT = 3u
    };


    enum Direction8
    {
        Down = 0u,
        DownerRight = 1u,
        Right = 2u,
        UpperRight = 3u,
        Up = 4u,
        UpperLeft = 5u,
        Left = 6u,
        DownerLeft = 7u
    };





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
    /// ↓が入力されているか(4方向)
    /// </summary>
    virtual bool Direction4Down() const;

    /// <summary>
    /// →が入力されているか(4方向)
    /// </summary>
    virtual bool Direction4Right() const;

    /// <summary>
    /// ↑が入力されているか(4方向)
    /// </summary>
    virtual bool Direction4Up() const;

    /// <summary>
    /// ←が入力されているか(4方向)
    /// </summary>
    virtual bool Direction4Left() const;

    /// <summary>
    /// ↓が入力されているか
    /// </summary>
    virtual bool Direction8Down() const;

    /// <summary>
    /// ↙が入力されているか
    /// </summary>
    virtual bool Direction8DownerRight() const;

    /// <summary>
    /// →が入力されているか
    /// </summary>
    virtual bool Direction8Right() const;

    /// <summary>
    /// ↗が入力されているか
    /// </summary>
    virtual bool Direction8UpperRight() const;

    /// <summary>
    /// ↑が入力されているか
    /// </summary>
    virtual bool Direction8Up() const;

    /// <summary>
    /// ↖が入力されているか
    /// </summary>
    virtual bool Direction8UpperLeft() const;

    /// <summary>
    /// ↖が入力されているか
    /// </summary>
    virtual bool Direction8Left() const;

    /// <summary>
    /// ↙が入力されているか
    /// </summary>
    virtual bool Direction8DownerLeft() const;

    /// <summary>
    /// 決定が入力されているか
    /// </summary>
    virtual bool Confirm() const;

    /// <summary>
    /// キャンセルが入力されているか
    /// </summary>
    virtual bool Cancel() const;

protected:



    inline bool Direction4Check(const Direction4 direction) const;
    inline bool Direction8Check(const Direction8 direction) const;
    
};


}


}