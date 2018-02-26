add_executable(lnxwrapper src/main.cpp)

target_include_directories(lnxwrapper PUBLIC include)
target_include_directories(lnxwrapper PRIVATE src)

target_link_libraries(lnxwrapper PRIVATE infowrapper)

