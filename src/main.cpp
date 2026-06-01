#include "webview/webview.h"

#include <iostream>

int WINAPI WinMain(HINSTANCE /*hInst*/, HINSTANCE /*hPrevInst*/,
                   LPSTR /*lpCmdLine*/, int /*nCmdShow*/) {
    try {
        webview::webview w(false, nullptr);
        w.set_title("基本示例");
        w.set_size(500, 700, WEBVIEW_HINT_NONE);
        w.set_html("Thanks for using webview!<br>感谢使用");
        w.run();
    } catch (const webview::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}