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
    throw std::logic_error("未実装です");
}


void
PlayObject::MakeDicision_IsEquipped(const viewController::PlaySequence * _caller,
                                    const PlayObject * _possessor,
                                    const std::map<s3d::String, int> _operation)
{
    throw std::logic_error("未実装です");
}


void
PlayObject::Move_Autonomy(viewController::PlaySequence* _caller)
{
    accel.length();
}


void PlayObject::Draw_Autonomy(const viewController::PlaySequence * _caller)
    const
{
    //描画本体の処理は所持されている状態と相対位置の違いのみ
    Draw_IsEquipped(_caller, Vector3D<double>::Zero);
}


void PlayObject::Draw_IsEquipped(const viewController::PlaySequence * _caller,
                                 const Vector3D<double>& _absolutePosition)
const
{
    Vector3D<double> pos = _absolutePosition + position;
    //子要素を先に描画する
    for (PlayObject* p : possession)
    {
        p->Draw_IsEquipped(_caller, pos);
    }

    //アニメーションをしたい場合は個別のパーツをMat4x4で座標変換する
    //それはそれを実現するためのエディタを作ってからやろう
    //Array<ModelNode> nodes = model.nodes;
    //ノードをposに移動させて描画
    for (const ModelNode& node : model.nodes())
    {
        TransformedMesh tMesh = node.mesh.translated(pos);
        String dTextureName = node.material.diffuseTextureName;
        dTextureName.isEmpty ? tMesh.draw() : tMesh.draw(TextureAsset(dTextureName));
    }
}


Vector3D<double> PlayObject::IsCollision(PlayObject * _target)
{
    throw std::logic_error("PlayObject::IsCollisionは未実装です");
    return Vector3D<double>(0, 0, 0);
}


}

}