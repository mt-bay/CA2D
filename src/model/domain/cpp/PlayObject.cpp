#include "..\PlayObject.hpp"

#include "../../../ViewController/PlaySequence.hpp"

#include <algorithm>

namespace model
{


namespace domain
{



PlayObjectType
PlayObject::GetType()
{
    return type;
}


void PlayObject::OnCreate()
{

}


void
PlayObject::MakeDicision_Autonomy(const viewController::PlaySequence * _caller,
                                  const size_t _thisIndex)
{
    throw std::logic_error("�������ł�");
}


void
PlayObject::MakeDicision_IsEquipped(const viewController::PlaySequence * _caller,
                                    const PlayObject * _possessor,
                                    const std::map<s3d::String, int> _operation)
{
    throw std::logic_error("�������ł�");
}


void
PlayObject::Move_Autonomy(viewController::PlaySequence* _caller)
{
    accel.length();
}


void PlayObject::Draw_Autonomy(const viewController::PlaySequence * _caller)
    const
{
    //�`��{�̂̏����͏�������Ă����ԂƑ��Έʒu�̈Ⴂ�̂�
    Draw_IsEquipped(_caller, Vector3D<double>::Zero);
}


void PlayObject::Draw_IsEquipped(const viewController::PlaySequence * _caller,
                                 const Vector3D<double>& _absolutePosition)
const
{
    Vector3D<double> pos = _absolutePosition + position;
    //�q�v�f���ɕ`�悷��
    for (PlayObject* p : possession)
    {
        p->Draw_IsEquipped(_caller, pos);
    }

    //�A�j���[�V�������������ꍇ�͌ʂ̃p�[�c��Mat4x4�ō��W�ϊ�����
    //����͂�����������邽�߂̃G�f�B�^������Ă����낤
    //Array<ModelNode> nodes = model.nodes;
    //�m�[�h��pos�Ɉړ������ĕ`��
    for (const ModelNode& node : model.nodes())
    {
        TransformedMesh tMesh = node.mesh.translated(pos);
        String dTextureName = node.material.diffuseTextureName;
        dTextureName.isEmpty ? tMesh.draw() : tMesh.draw(TextureAsset(dTextureName));
    }
}


Vector3D<double> PlayObject::IsCollision(PlayObject * _target)
{
    throw std::logic_error("PlayObject::IsCollision�͖������ł�");
    return Vector3D<double>(0, 0, 0);
}


}

}