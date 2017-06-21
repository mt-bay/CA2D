# include <Siv3D.hpp>

#include"lib/asc/Input.hpp"

#include "sys/kernel.hpp"


sys::Kernel system;


void Main()
{
    //初期化の類
    system = sys::Kernel();

    asc::Input input;

    Font font(16);

    // コントローラーを用意
    Gamepad gamepad(0);
    XInput xinput(0);
    xinput.setLeftThumbDeadZone();

    // ボタンの追加
    input.addButton(L"fire", s3d::Input::KeyZ | Gamepad(0).button(2) | XInput(0).buttonA);

    // 軸の追加
    input.addAxis(L"x", asc::Axis(s3d::Input::KeyRight, s3d::Input::KeyLeft) | asc::Axis(gamepad, asc::GamepadAxis::X) | asc::Axis(xinput, asc::XInputAxis::LeftThumbX));
    input.addAxis(L"y", asc::Axis(s3d::Input::KeyUp, s3d::Input::KeyDown) | asc::Axis(gamepad, asc::GamepadAxis::Y) | asc::Axis(xinput, asc::XInputAxis::LeftThumbY));

    input.enabled = true;
    s3d::String str;
    while (System::Update())
    {

        //font(L"わいわい忍者ランド").draw(110, 100);
        // 値の使用

        str = s3d::String(L"fire = ") + s3d::ToString(input.axis(L"x"));
        font(str).draw(10, 10);
        str = s3d::String(L"x = ") + s3d::ToString(input.axis(L"y"));
        font(str).draw(10, 30);
        str = s3d::String(L"4方向で表現 = ") + s3d::ToString(input.as4Direction(L"x", L"y").value_or(256));
        font(str).draw(10, 50);
        // 入力を8方向で返す
        str = s3d::String(L"8方向で表現 = ") + s3d::ToString(input.as8Direction(L"x", L"y").value_or(256));
        font(str).draw(10, 80);


        str = s3d::String(L"fire = ") + s3d::ToString(input.button(L"fire").clicked);
        font(str).draw(10, 110);

        
    }
}