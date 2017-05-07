#pragma once

#include "Sequence.hpp"
#include "../model/domain/PlayObject.hpp"

namespace viewController
{


class PlaySequence : public Sequence
{
    ////メンバ////
public:
    ///<summary>ステージ上で自律しているオブジェクト</summary>
    std::vector<model::domain::PlayObject> autonomyObjects;

protected:
    PixelShader* shader;


    ////コンストラクタ////
public:
    ///<summary>
    ///デフォルトコンストラクタ
    ///</summary>
    PlaySequence();

    ///<summary>
    ///CSVファイルを読んでインスタンス生成
    ///</summary>
    ///<param name="_csv">読み込むCSVファイル</param>
    PlaySequence(CSVReader _csv);


    ///<summary>
    ///JSONファイルを読み込んでインスタンス生成
    ///</summary>
    ///<param name="_json">読み込むJSONファイル</param>
    PlaySequence(JSONReader _json);

    ////メソッド////
public:
    ///<summary>
    ///メソッドが作成中のときに非同期で実行される内容
    ///</summary>
    virtual void OnCreate();

    ///<summary>
    ///毎フレーム呼び出される処理
    ///</summary>
    virtual void Update();

    ///<summary>
    ///非同期で行われる処理
    ///</summary>
    virtual void UpdateAsync();

    ///<summary>
    ///描画
    ///</summary>
    virtual void Draw();
};


}