#pragma once


#include "Choice.hpp"


namespace model
{


namespace domain
{


class Choises
{
    //// メンバ変数 ////
protected:
    int                  selected;
    std::vector<Choice*> choises;

    /// <summary>選択肢リストの上中央の位置</summary>
    s3d::Vector2D<int>   upperCenter;

    ///<summary>表示する行数</summary>
    unsigned int visibleRowNum;

    ///<summary>列数</summary>
    unsigned int columnNum;
public:
    ///<summary>
    /// ←
    ///</summary>
    virtual void Left() = 0;

    ///<summary>
    /// ↓
    ///</summary>
    virtual void Down() = 0;

    ///<summary>
    /// ↑
    ///</summary>
    virtual void Up() = 0;

    ///<summary>
    /// →
    ///</summary>
    virtual void Right() = 0;

    ///<summary>
    ///選択中の要素を実行
    ///</summary>
    virtual void Execute();

    ///<summary>
    ///選択中の要素を実行できない場合の処理
    ///</summary>
    virtual void Ignore();


protected:

};


}


}