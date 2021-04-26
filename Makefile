# source files in this project 
PROJECT_NAME=assg00

test_src  = tests-main.cpp \
	    $(PROJECT_NAME)-tests.cpp \
	    $(PROJECT_NAME)-functions.cpp
debug_src = $(PROJECT_NAME)-main.cpp \
	    $(PROJECT_NAME)-functions.cpp

# template files, list all files that define template classes
# or functions and should not be compiled separately (template
# is included where used)
template_files =

# common targets and variables used for all assignments/projects
include include/Makefile.inc
