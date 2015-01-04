# Set a variable for commands below
set(PROJECT_NAME lamp)

# Define your project and language
project(${PROJECT_NAME} C CXX)

# Define the source code
set(${PROJECT_NAME}_SRCS lamp.cpp)

# Command to generate code arduino firmware (.hex file)
generate_arduino_firmware(${PROJECT_NAME})