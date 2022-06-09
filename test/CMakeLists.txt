option(SINGLE_TEST "generate single gtest executable" ON)
if (NOT SINGLE_TEST)
    add_subdirectory(testsum)
    add_subdirectory(testsub)

else()

    file(GLOB SRCS 
        ../*.cpp
        testsum/*.cpp
        testsub/*.cpp )

    file(GLOB HEADERS
        ../*.h
        testsum/*.h 
        testsub/*.h)

    message(STATUS ${SRCS})

    list(FILTER SRCS EXCLUDE REGEX "../main.cpp")
    message(STATUS ${SRCS})

    ADD_EXECUTABLE(whole_test ${SRCS})

    TARGET_LINK_LIBRARIES(whole_test
        gtest_main
        gtest
        gmock
        pthread
    )

    add_test(NAME whole_test
            COMMAND whole_test)

endif()
# add new test here if you have.
