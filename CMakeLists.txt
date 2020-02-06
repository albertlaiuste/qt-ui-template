#-------------------------------------------------------------------------------
#	CMAKE SETTINGS
#-------------------------------------------------------------------------------
cmake_minimum_required(VERSION 3.16.0)
set(QT_MINIMUM_VERSION 5.14.1)
#-------------------------------------------------------------------------------
#	SOURCE CODE
#-------------------------------------------------------------------------------
file(GLOB_RECURSE HEADER_FILES "src/*.h")
file(GLOB_RECURSE SOURCE_FILES "src/*.cpp")
#-------------------------------------------------------------------------------
#	PROJECT SETTINGS
#-------------------------------------------------------------------------------
set(TARGET_NAME qt-ui-template)
set(PROJECT_NAME ${TARGET_NAME})
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(${PROJECT_NAME} LANGUAGES CXX)
#-------------------------------------------------------------------------------
#	Qt SETTINGS
#-------------------------------------------------------------------------------
# Required Qt settings
set(QtPath "C:\\Qt\\5.14.1\\mingw73_64")

set(CMAKE_PREFIX_PATH ${QtPath})
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

# Find the necessary Qt5 modules
find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)
#-------------------------------------------------------------------------------
#	SOURCE GROUPS
#-------------------------------------------------------------------------------
source_group(generated REGULAR_EXPRESSION ".*_automoc.cpp")
source_group(sources REGULAR_EXPRESSION ".*[.]cpp")
source_group(headers REGULAR_EXPRESSION ".*[.]h")
#-------------------------------------------------------------------------------
#	ADDITIONAL LIBRARIES
#-------------------------------------------------------------------------------
list(APPEND LIBRARIES
Qt5::Core
Qt5::Gui
Qt5::Widgets
)
#-------------------------------------------------------------------------------
#	GENERATE EXECUTABLE
#-------------------------------------------------------------------------------
# Generate the executable
add_executable(${TARGET_NAME} ${HEADER_FILES} ${SOURCE_FILES})
# link libraries
target_link_libraries(${TARGET_NAME} ${LIBRARIES})
