#pragma once

#include "ControllerInput.hpp"

namespace mdl
{


namespace domain
{


class UserXInput : public ControllerInput
{
    //// メンバ ////
private:
    s3d::XInput input;

    //// コンストラクタ ////
public:
    ///<summary>
    ///デフォルトコンストラクタは削除
    ///</summary>
    UserXInput() = delete;

    ///<summary>
    ///ユーザ番号を設定して初期化
    ///</summary>
    UserXInput(s3d::uint32 _userIndex);

    ///<summary>
    ///コピーコンストラクタ
    ///</summary>
    UserXInput(const UserXInput& _original);

    //// メソッド ////
public:
    //アナログスティック
    ///<summary>
    ///アナログスティック(左)の状態
    ///</summary>
    ///<returns>アナログスティック(左)の状態</returns>
    virtual s3d::Vector2D<double> AnalogStickL();

    ///<summary>
    ///アナログスティック(右)の状態
    ///</summary>
    ///<returns>アナログスティック(右)の状態</returns>
    virtual s3d::Vector2D<double> AnalogStickR();

    //十字キー
    ///<summary>
    ///十字キー左
    ///</summary>
    ///<returns>十字キー左</returns>
    virtual s3d::Key Left();

    ///<summary>
    ///十字キー下
    ///</summary>
    ///<returns>十字キー左</returns>
    virtual s3d::Key Down();

    ///<summary>
    ///十字キー上
    ///</summary>
    ///<returns>十字キー上</returns>
    virtual s3d::Key Up();

    ///<summary>
    ///十字キー右
    ///</summary>
    ///<returns>十字キー右</returns>
    virtual s3d::Key Right();

    //メニュー用ボタン
    ///<summary>
    ///決定ボタン
    ///</summary>
    ///<returns>決定ボタン</returns>
    virtual s3d::Key Confirm();

    ///<summary>
    ///キャンセルボタン
    ///</summary>
    ///<returns>キャンセルボタン</returns>
    virtual s3d::Key Cancel();
};


}


}