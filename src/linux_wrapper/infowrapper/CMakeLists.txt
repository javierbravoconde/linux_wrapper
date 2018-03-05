add_library(infowrapper SHARED src/Uname.cpp src/UnameBase.cpp src/UnameFactory.cpp src/Domain.cpp src/DomainFactory.cpp src/DomainBase.cpp)

target_include_directories(infowrapper PUBLIC include)
target_include_directories(infowrapper PRIVATE src)

