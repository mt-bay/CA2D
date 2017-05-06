#pragma once

#include <Siv3D.hpp>


namespace model
{


namespace domain
{


///<summary>
/// ゲーム用コントローラ(ゲームパッド, XBOXコントローラ等)からの入力用受付用ベースクラス
///</summary>
class ControllerInput
{
public:
    //アナログパッド
    virtual Vector2D<double> AnalogStickL() = 0;
    virtual Vector2D<double> AnalogStickR() = 0;

    //十字キー
    virtual s3d::Key Left()  = 0;
    virtual s3d::Key Down()  = 0;
    virtual s3d::Key Up()    = 0;
    virtual s3d::Key Right() = 0;

    //メニュー用ボタン
    virtual s3d::Key Confirm() = 0;
    virtual s3d::Key Cancel()  = 0;
};


}


}