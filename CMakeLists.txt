cmake_minimum_required(VERSION 3.29)
project(CLangStudy C)

set(CMAKE_C_STANDARD 11)

add_executable(CLangStudy main.c)

# Function to add executables for each C file in a directory
function(add_study_executables directory)
    # Get all .c files in the specified directory
    file(GLOB STUDY_FILES "${directory}/*.c")

    foreach(STUDY_FILE ${STUDY_FILES})
        # Get the file name without directory and extension
        get_filename_component(STUDY_NAME ${STUDY_FILE} NAME_WE)

        # Create an executable for each study file
        add_executable(${STUDY_NAME} ${STUDY_FILE})
    endforeach()
endfunction()

# Alternatively, to automatically find all CH* directories:
 file(GLOB STUDY_DIRS "${CMAKE_SOURCE_DIR}/CH*")
 foreach(DIR ${STUDY_DIRS})
     if(IS_DIRECTORY ${DIR})
         add_study_executables(${DIR})
     endif()
 endforeach()


