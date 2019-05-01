cmake_minimum_required(VERSION 3.13)
project(matam1 C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99 -Wall -pedantic-errors -Werror -DNDEBUG -L. -g ")


include_directories(${MY_SOURCE_DIR}/tests)

add_executable(eurovisionContest
        eurovision.h
        libmtm.a
        list.h
        set.h
        #tests/test_utilities.h
        #tests/eurovisionTests.c
        #tests/eurovisionTests.h
        #tests/eurovisionTestsMain.c
        new_tests/main.c
        #tests2/main.c
        eurovision.c
        country.h
        country.c
        judge.c
        judge.h
        points.c
        points.h
        namelib.h support_functions.c support_functions.h)

target_link_libraries(eurovisionContest ${CMAKE_SOURCE_DIR}/libmtm.a)