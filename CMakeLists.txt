cmake_minimum_required(VERSION 3.7)
project(tcpl_kr)

set(CMAKE_C_STANDARD 99)

#set(SOURCE_FILES chapter_01/page_009.c chapter_01/page_015.c chapter_01/page_028.c chapter_02/page_038.c chapter_02/page_041_1.c)
set(SOURCE_FILES chapter_03/page_061)
add_executable(tcpl_kr ${SOURCE_FILES})