cmake_minimum_required(VERSION 3.10)
project(LibraryManagementSystem)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(inc)

# Source files
set(SOURCES
    src/main.cpp
    src/CMain.cpp
    src/CLibrary.cpp
    src/CBook.cpp
    src/CUser.cpp
    src/CAdmin.cpp
    src/CLibrarian.cpp
    src/CMember.cpp
    src/CTransaction.cpp
    src/CBorrowTransaction.cpp
    src/CReturnTransaction.cpp
    src/CReservation.cpp
    src/CFine.cpp
    src/CReport.cpp
    src/CLog.cpp
    src/CEmailNotification.cpp
    src/CSMSNotification.cpp
)

# Add executable
add_executable(LibraryManagementSystem ${SOURCES})

# Add threading library
find_package(Threads REQUIRED)
target_link_libraries(LibraryManagementSystem PRIVATE Threads::Threads)
