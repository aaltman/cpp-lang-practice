# CMakeLists files in this project can
# refer to the root source directory of the project as ${HELLO_SOURCE_DIR} and
# to the root binary directory of the project as ${HELLO_BINARY_DIR}.
cmake_minimum_required (VERSION 2.8.11)
project (CPP_LANG_PRACTICE)

add_subdirectory(language_features)
target_include_directory(language_features)

add_executable(main main.cpp ${LANGUAGE_FEATURES_SOURCES})