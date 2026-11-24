// main.cpp — entry point. Wires config and subsystems together.

#include "vtuberkitx/settings.h"
#include "vtuberkitx/avatar.h"
#include "vtuberkitx/tracking.h"
#include "vtuberkitx/tts.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    vtuberkitx::Settings settings = vtuberkitx::Settings::load_default();
    vtuberkitx::Avatar avatar(settings.store_path);
    vtuberkitx::Tracking tracking(settings.store_path);
    vtuberkitx::Tts tts(settings.store_path);
    std::fprintf(stderr, "[vtuber-kit-x] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
