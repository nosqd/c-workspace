CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

PROJECT(FilesInC)

include_directories(FilesInC "src/inc")
add_executable(files-in-c ./src/main.c ./src/impl/reader.c ./src/impl/writer.c)
