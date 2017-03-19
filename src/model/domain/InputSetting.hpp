#pragma once


#include <Siv3D.hpp>


namespace mdl
{


namespace domain
{


class InputSetting
{
    //// �����o�ϐ� ////
private:
    //��������
    static s3d::Key left;
    static s3d::Key down;
    static s3d::Key up;
    static s3d::Key right;

    //// ���\�b�h ////
public:
    static s3d::Key Left();
    static s3d::Key Down();
    static s3d::Key Up();
    static s3d::Key Right();

private:
    static void Load();
    static bool IsLoaded();
    
};


}



}