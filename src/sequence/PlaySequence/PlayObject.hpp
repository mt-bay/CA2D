#pragma once
#include <Siv3D.hpp>

#include <vector>
#include <map>
#include "2D.hpp"

#include "../PlaySequence.hpp"
#include "PlayObject/PlayObjectType.hpp"
namespace sys
{


namespace seq
{


enum PlayObjectType;


///<summary>
/// 主にPlaySequenceで使うオブジェクトの基本クラス
///</summary>
class PlayObject
{
    //メンバ変数
public:
    ///<summary>このオブジェクトの3Dモデル</summary>
    Model model;
    ///<summary>このオブジェクトのテクスチャ</summary>
    Texture texture;

    ///<summary>位置</summary>
    Vector3D<double> position;

    ///<summary>このオブジェクトが所持しているオブジェクト</summary>
    std::vector<PlayObject*> possession;
protected:
    ///<summary>オブジェクトの種類</summary>
    PlayObjectType type;

    ///<summary>加速度</summary>
    Vector3D<double> accel;


    //アクセッサ
public:
    ///<summary>type取得</summary>
    ///<returns>このインスタンスのtype</returns>
    PlayObjectType GetType();

    //メソッド
public:
    ///<summary>
    ///インスタンス生成時に非同期で呼び出されるメソッド
    virtual void
    OnCreate
        ();


    ///<summary>
    ///オブジェクトが自律している(何かに所持されている状態ではない)際の意思決定
    ///</summary>
    virtual void
    MakeDicision_Autonomy
        (const PlaySequence* _caller, const size_t _thisIndex);

    ///<summary>
    ///オブジェクトが何かに所持されている際の意思決定
    ///</summary>
    virtual void
    MakeDicision_IsEquipped
        (const PlaySequence*              _caller,
         const PlayObject*                _possessor,
         const std::map<mt::tstring, int> _operation);

    ///<summary>
    ///オブジェクトが自律している(何かに所持されている状態ではない)際の移動処理
    ///</summary>
    virtual void
    Move_Autonomy
        (PlaySequence* _caller);

    ///<summary>
    ///オブジェクトが自律している(何かに所持されている状態ではない)際の描画
    ///</summary>
    virtual void
    Draw_Autonomy
        (const PlaySequence* _caller)
        const;

    ///<summary>
    ///オブジェクトが何かに所持されている際の描画
    ///</summary>
    virtual void
        Draw_IsEquipped
        (const PlaySequence*     _caller,
         const Vector3D<double>& _absolutePosition)
        const;

    ///<summary>
    ///衝突判定
    ///</summary>
    ///<param name=""
    virtual Vector3D<double>
    IsCollision(PlayObject* _target);
};





}


}