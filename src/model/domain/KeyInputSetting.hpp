#pragma once


#include <Siv3D.hpp>


namespace mdl
{


namespace domain
{


class KeyInputSetting
{
    //// メンバ変数 ////
private:
    static s3d::Key left;
    static s3d::Key down;
    static s3d::Key up;
    static s3d::Key right;
    static s3d::Key confirm;
    static s3d::Key cancel;

    //// メソッド ////
public:
    static s3d::Key Left();
    static s3d::Key Down();
    static s3d::Key Up();
    static s3d::Key Right();
    static s3d::Key Confirm();
    static s3d::Key Cancel();

private:
    static void Load(const JSONReader& _settingFile);
    
};


}



}