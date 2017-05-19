/** ルーチン管理用クラス宣言ファイル */
#pragma once


#include <vector>
#include <queue>

#include "../model/domain/Input.hpp"
#include "../ViewController/Sequence.hpp"

namespace sys
{


///Kernel
///状態管理用クラス
class Kernel
{
	//メンバ変数
public:

private:
    ///sequenceをスタック状に保存するvector
    std::vector<viewController::Sequence*> sequenceStack;
    ///カレントとして処理・描画するindex
    int currentIndex;
    
    std::queue<s3d::String> loadRequest;

public:
    void Init();

    void MainProcess();

private:
    ///
    void Update();

    void Draw();

    void DeleteSequence();

    void GenerateSequence();

    int GetNewSequenceIndex();
};


};
