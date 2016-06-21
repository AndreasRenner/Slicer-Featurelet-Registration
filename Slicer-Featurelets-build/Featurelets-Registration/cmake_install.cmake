# Install script for directory: /home/andreas/code/Slicer-Featurelets/Featurelets-Registration

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libqSlicerRegistrationModule.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libqSlicerRegistrationModule.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libqSlicerRegistrationModule.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules" TYPE SHARED_LIBRARY FILES "/home/andreas/code/Slicer-Featurelets_4.5/Slicer-Featurelets-build/lib/Slicer-4.5/qt-loadable-modules/libqSlicerRegistrationModule.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libqSlicerRegistrationModule.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libqSlicerRegistrationModule.so")
    file(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libqSlicerRegistrationModule.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libqSlicerRegistrationModule.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/andreas/code/Slicer-Featurelets_4.5/Slicer-Featurelets-build/Featurelets-Registration/MRML/cmake_install.cmake")
  include("/home/andreas/code/Slicer-Featurelets_4.5/Slicer-Featurelets-build/Featurelets-Registration/Logic/cmake_install.cmake")
  include("/home/andreas/code/Slicer-Featurelets_4.5/Slicer-Featurelets-build/Featurelets-Registration/Testing/cmake_install.cmake")

endif()

