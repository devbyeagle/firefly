file(GLOB_RECURSE SOURCES "*.cpp")

list(FILTER SOURCES EXCLUDE REGEX ".*/Platform/.*")

add_library(firefly ${SOURCES})
