#include "webview/webview.h"

#include <iostream>

int WINAPI WinMain(HINSTANCE /*hInst*/, HINSTANCE /*hPrevInst*/,
                   LPSTR /*lpCmdLine*/, int /*nCmdShow*/) {
    try {
        webview::webview w(false, nullptr);
        w.set_title("基本示例");
        w.set_size(600, 700, WEBVIEW_HINT_NONE);
        w.navigate((std::string("file:///") + "D:\\Projects\\easynote\\pages\\index.html").c_str());
        // w.navigate("https://baidu.com");
        w.run();
    } catch (const webview::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    return 0;
}