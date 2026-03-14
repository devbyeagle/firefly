project(examples)

file(GLOB EXAMPLE_DIRS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/*)

foreach(dir ${EXAMPLE_DIRS})
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${dir})
        # Collect all cpp files in this subdirectory
        file(GLOB DIR_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/${dir}/*.cpp")
        # Skip empty directories
        if(DIR_SOURCES)
            # Use the subdirectory name as executable name
            add_executable(${dir} ${DIR_SOURCES})
            target_link_libraries(${dir} PRIVATE firefly)
        endif()
    endif()
endforeach()
