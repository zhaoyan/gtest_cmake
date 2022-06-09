#I want to test a function in the sum.cpp file,
#So I need to add it to he project.
file(GLOB SRCS 
     *.cpp 
     ../../*.cpp )

file(GLOB HEADERS
    *.h 
    ../../*.h)
message(STATUS ${SRCS})

list(FILTER SRCS EXCLUDE REGEX "../../main.cpp")

message(STATUS ${SRCS})

ADD_EXECUTABLE(testsum ${SRCS})
enable_testing()

TARGET_LINK_LIBRARIES(testsum
    gtest
    gmock
    pthread
)

add_test(NAME testsum
         COMMAND testsum)
