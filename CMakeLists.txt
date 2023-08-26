cmake_minimum_required(VERSION 3.15)
project(DecentCISandbox)
set(CMAKE_CXX_STANDARD 17)
add_executable(DecentCISandbox main.cpp)
enable_testing()

add_test(NAME DecentCISandboxTest1 COMMAND $<TARGET_FILE:DecentCISandbox> "A")
add_test(NAME DecentCISandboxTest2 COMMAND $<TARGET_FILE:DecentCISandbox> "A")
add_test(NAME DecentCISandboxTest3 COMMAND $<TARGET_FILE:DecentCISandbox> "A")
