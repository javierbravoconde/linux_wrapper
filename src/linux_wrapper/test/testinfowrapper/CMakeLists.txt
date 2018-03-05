file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(testinfowrapper ${SRCS})

TARGET_LINK_LIBRARIES(testinfowrapper
    infowrapper
    libgtest
    libgmock
)

target_compile_features(testinfowrapper 
PUBLIC
   cxx_strong_enums
PRIVATE
  cxx_lambdas
  cxx_range_for
)

MESSAGE( STATUS "CMAKE_CURRENT_SOURCE_DIR      :" ${CMAKE_CURRENT_SOURCE_DIR} )


get_property(name             TARGET testinfowrapper PROPERTY NAME )
get_property(inc_dirs         DIRECTORY PROPERTY INCLUDE_DIRECTORIES)
get_property(lnk_lib          TARGET testinfowrapper PROPERTY LINK_LIBRARIES )
get_property(compile_features TARGET testinfowrapper PROPERTY COMPILE_FEATURES )
get_property(compile_flags    TARGET testinfowrapper PROPERTY COMPILE_FLAGS )
get_property(compile_options  TARGET testinfowrapper PROPERTY COMPILE_OPTIONS )

MESSAGE( STATUS "NAME                  :" "${name}" )
MESSAGE( STATUS "INCLUDE_DIRECTORIES   :" "${inc_dirs}" )
MESSAGE( STATUS "LINK_LIBRARIES        :" "${lnk_lib}" )
MESSAGE( STATUS "COMPILE_FEATURES      :" "${compile_features}" )
MESSAGE( STATUS "COMPILE_FLAGS         :" "${compile_flags}" )
MESSAGE( STATUS "COMPILE_OPTIONS       :" "${compile_options}" )

add_test(NAME testinfowrapper COMMAND testinfowrapper)
