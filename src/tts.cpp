// tts.cpp — part of vtuber-kit-x.

#include "vtuberkitx/tts.h"

#include <cstdio>

namespace vtuberkitx {

Tts::Tts(const std::string& config_path)
    : config_path_(config_path) {}

void Tts::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Tts::run() {
    if (verbose_) std::fprintf(stderr, "[vtuber-kit-x] tts: run\n");
    // core logic lives here
    return true;
}

}  // namespace vtuberkitx
