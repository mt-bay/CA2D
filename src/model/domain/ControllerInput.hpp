#pragma once

#include <Siv3D.hpp>


namespace model
{


namespace domain
{


///<summary>
/// �Q�[���p�R���g���[��(�Q�[���p�b�h, XBOX�R���g���[����)����̓��͗p��t�p�x�[�X�N���X
///</summary>
class ControllerInput
{
public:
    //�A�i���O�p�b�h
    virtual Vector2D<double> AnalogStickL() = 0;
    virtual Vector2D<double> AnalogStickR() = 0;

    //�\���L�[
    virtual s3d::Key Left()  = 0;
    virtual s3d::Key Down()  = 0;
    virtual s3d::Key Up()    = 0;
    virtual s3d::Key Right() = 0;

    //���j���[�p�{�^��
    virtual s3d::Key Confirm() = 0;
    virtual s3d::Key Cancel()  = 0;
};


}


}