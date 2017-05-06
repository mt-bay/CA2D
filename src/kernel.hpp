/** ルーチン管理用クラス宣言ファイル */
#pragma once


#include <vector>

#include "model/domain/Input.hpp"
#include "ViewController/Sequence.hpp"

namespace sys
{


///Kernel
///状態管理用クラス
class Kernel
{
	//メンバ変数
public:

    ///sequenceをスタック状に保存するvector
    std::vector<Sequence*> sequenceStack;
    ///カレントとして処理・描画するindex
    int currentIndex;

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
