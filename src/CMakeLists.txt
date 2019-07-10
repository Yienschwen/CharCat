add_library(
    CharCat
    SHARED
    charcat.h charcat.cc
    charcat_impl.h charcat_impl.cc
)

add_executable(
    CharCatTest
    charcat_test.cc
)
target_link_libraries(
    CharCatTest
    CharCat
)
