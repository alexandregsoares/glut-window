cmake_minimum_required(VERSION 3.17)
project(GlutWindow VERSION 1.0.0)

add_executable(GlutWindow src/main.cpp)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories( ${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} )

target_link_libraries( GlutWindow ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )
