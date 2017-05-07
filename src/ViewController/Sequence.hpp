#pragma once

#include "../model/domain/Input.hpp"

namespace viewController
{

//前方宣言
enum SequenceState;


///<summary>
///全シーケンスの基底クラス
///</summary>
class Sequence
{
    ////メンバ変数////
protected:
    ///<summary>
    ///オブジェクトの状態
    ///</summary>
    SequenceState state;
    model::domain::Input* input;

    ////コンストラクタ・デストラクタ////
public:
    ///<summary>
    ///コンストラクタ
    ///</summary>
    Sequence();
    
    ///<summary>
    ///デストラクタ
    ///</summary>
    virtual ~Sequence();

    ////Getter, Setter////
    ///<return>
    ///自身の状態を返す
    ///</return>
    virtual SequenceState State();

    ////メソッド////
    ///<summary>
    ///オブジェクトの破棄を決定した際に非同期で開始される処理
    ///</summary>
    virtual void OnDestory();

    ////処理////
    // 意思決定, 移動などの処理
    ///<summary>
    ///フレームごとの処理
    ///</summary>
    virtual void Update() = 0;

    ///<summary>
    ///非同期で行う処理<br />
    ///基本的に1フレームで収まらない処理をこちらで行う
    ///</summary>
    virtual void UpdateAsync();

    ///<summary>
    ///描画
    ///</summary>
    virtual void Draw() = 0;
};


}