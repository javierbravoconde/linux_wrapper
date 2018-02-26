add_library(infowrapper SHARED src/Uname.cpp src/UnameBase.cpp src/UnameFactory.cpp)

target_include_directories(infowrapper PUBLIC include)
target_include_directories(infowrapper PRIVATE src)

