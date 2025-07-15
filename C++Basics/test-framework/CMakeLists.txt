cmake_minimum_required(VERSION 3.22)

project(googletest-download NONE)

include(ExternalProject)

ExternalProject_Add(
        googletest
        SOURCE_DIR "/home/faizan/CppJourneyRw4/C++Basics/test-framework/googletest-src"
        BINARY_DIR "/home/faizan/CppJourneyRw4/C++Basics/test-framework/googletest-build"
        GIT_REPOSITORY
            https://github.com/google/googletest.git
        GIT_TAG
            release-1.12.0
        CONFIGURE_COMMAND ""
        BUILD_COMMAND ""
        INSTALL_COMMAND ""
        TEST_COMMAND ""
)
