#I want to test a function in the sum.cpp file,
#So I need to add it to he project.
file(GLOB SRCS 
     *.cpp 
     ../../sub.cpp)

file(GLOB HEADERS
     *.h 
     ../../*.h)
     
 message(STATUS ${SRCS})
 
 list(FILTER SRCS EXCLUDE REGEX "../../main.cpp")

ADD_EXECUTABLE(testsub ${SRCS})

TARGET_LINK_LIBRARIES(testsub
    gtest_main  
    gtest
    gmock
    pthread
)

add_test(NAME testsub
         COMMAND testsub)
