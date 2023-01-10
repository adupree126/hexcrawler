file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/include/*.h")
file(GLOB SOURCE_LIST CONFIGURE_DEPENDS "${PROJECT_SOURCE_DIR}/include/*.cpp")

# make a library for all everything in include
add_library(include_lib ${SOURCE_LIST} ${HEADER_LIST} MessageHandler.h)

target_include_directories(include_lib PUBLIC ../include)

# target_link_libraries(include_lib PRIVATE Qt6)

source_group(
        TREE "${PROJECT_SOURCE_DIR}/include"
        PREFIX "Header Files"
        FILES ${HEADER_LIST}
)
