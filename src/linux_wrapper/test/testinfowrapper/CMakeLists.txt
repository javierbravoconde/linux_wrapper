file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(testinfowrapper ${SRCS})

TARGET_LINK_LIBRARIES(testinfowrapper
    infowrapper
    libgtest
    libgmock
)

add_test(NAME testinfowrapper COMMAND testinfowrapper)
