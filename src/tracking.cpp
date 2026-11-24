// tracking.cpp — part of vtuber-kit-x.

#include "vtuberkitx/tracking.h"

#include <cstdio>

namespace vtuberkitx {

Tracking::Tracking(const std::string& config_path)
    : config_path_(config_path) {}

void Tracking::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Tracking::run() {
    if (verbose_) std::fprintf(stderr, "[vtuber-kit-x] tracking: run\n");
    // core logic lives here
    return true;
}

}  // namespace vtuberkitx
