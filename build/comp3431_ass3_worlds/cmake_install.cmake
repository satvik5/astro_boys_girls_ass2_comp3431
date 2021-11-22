# Install script for directory: /home/rsa2021/astro_boys_girls_ass2_comp3431/turtlebot3_ws/src/comp3431-ass3-worlds

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/rsa2021/astro_boys_girls_ass2_comp3431/install/comp3431_ass3_worlds")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/comp3431_ass3_worlds/" TYPE DIRECTORY FILES
    "/home/rsa2021/astro_boys_girls_ass2_comp3431/turtlebot3_ws/src/comp3431-ass3-worlds/launch"
    "/home/rsa2021/astro_boys_girls_ass2_comp3431/turtlebot3_ws/src/comp3431-ass3-worlds/models"
    "/home/rsa2021/astro_boys_girls_ass2_comp3431/turtlebot3_ws/src/comp3431-ass3-worlds/worlds"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/rsa2021/astro_boys_girls_ass2_comp3431/build/comp3431_ass3_worlds/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/comp3431_ass3_worlds")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/rsa2021/astro_boys_girls_ass2_comp3431/build/comp3431_ass3_worlds/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/comp3431_ass3_worlds")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/comp3431_ass3_worlds/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/comp3431_ass3_worlds/environment" TYPE FILE FILES "/home/rsa2021/astro_boys_girls_ass2_comp3431/build/comp3431_ass3_worlds/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/comp3431_ass3_worlds/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/comp3431_ass3_worlds/environment" TYPE FILE FILES "/home/rsa2021/astro_boys_girls_ass2_comp3431/build/comp3431_ass3_worlds/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/comp3431_ass3_worlds" TYPE FILE FILES "/home/rsa2021/astro_boys_girls_ass2_comp3431/build/comp3431_ass3_worlds/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/comp3431_ass3_worlds" TYPE FILE FILES "/home/rsa2021/astro_boys_girls_ass2_comp3431/build/comp3431_ass3_worlds/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/comp3431_ass3_worlds" TYPE FILE FILES "/home/rsa2021/astro_boys_girls_ass2_comp3431/build/comp3431_ass3_worlds/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/comp3431_ass3_worlds" TYPE FILE FILES "/home/rsa2021/astro_boys_girls_ass2_comp3431/build/comp3431_ass3_worlds/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/comp3431_ass3_worlds" TYPE FILE FILES "/home/rsa2021/astro_boys_girls_ass2_comp3431/build/comp3431_ass3_worlds/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/rsa2021/astro_boys_girls_ass2_comp3431/build/comp3431_ass3_worlds/ament_cmake_index/share/ament_index/resource_index/packages/comp3431_ass3_worlds")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/comp3431_ass3_worlds/cmake" TYPE FILE FILES
    "/home/rsa2021/astro_boys_girls_ass2_comp3431/build/comp3431_ass3_worlds/ament_cmake_core/comp3431_ass3_worldsConfig.cmake"
    "/home/rsa2021/astro_boys_girls_ass2_comp3431/build/comp3431_ass3_worlds/ament_cmake_core/comp3431_ass3_worldsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/comp3431_ass3_worlds" TYPE FILE FILES "/home/rsa2021/astro_boys_girls_ass2_comp3431/turtlebot3_ws/src/comp3431-ass3-worlds/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/rsa2021/astro_boys_girls_ass2_comp3431/build/comp3431_ass3_worlds/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
