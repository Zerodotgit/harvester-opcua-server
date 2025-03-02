cmake_minimum_required(VERSION 3.30)
project(opc_server C)

set(CMAKE_C_STANDARD 23)

add_executable(opc_server src/main.c)

target_link_libraries(${PROJECT_NAME} open62541)
