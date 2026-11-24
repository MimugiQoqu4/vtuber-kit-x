// avatar.cpp — part of vtuber-kit-x.

#include "vtuberkitx/avatar.h"

#include <cstdio>

namespace vtuberkitx {

Avatar::Avatar(const std::string& config_path)
    : config_path_(config_path) {}

void Avatar::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Avatar::run() {
    if (verbose_) std::fprintf(stderr, "[vtuber-kit-x] avatar: run\n");
    // core logic lives here
    return true;
}

}  // namespace vtuberkitx
