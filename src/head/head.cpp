#include <iostream>
#include <cstdlib>

#include <log.hpp>

int main(int argc, char *argv[]) {
    CatnetUtils::Log::Init();

    HD_INFO("I am a Head (CATnet)!");

    return EXIT_SUCCESS;
}