# Install script for directory: /home/andreas/code/Slicer-Featurelets/Featurelets-Registration/MRML

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libvtkSlicerRegistrationModuleMRML.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libvtkSlicerRegistrationModuleMRML.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libvtkSlicerRegistrationModuleMRML.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules" TYPE SHARED_LIBRARY FILES "/home/andreas/code/Slicer-Featurelets_4.5/lib/Slicer-4.5/qt-loadable-modules/libvtkSlicerRegistrationModuleMRML.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libvtkSlicerRegistrationModuleMRML.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libvtkSlicerRegistrationModuleMRML.so")
    file(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libvtkSlicerRegistrationModuleMRML.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libvtkSlicerRegistrationModuleMRML.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libvtkSlicerRegistrationModuleMRMLPythonD.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libvtkSlicerRegistrationModuleMRMLPythonD.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libvtkSlicerRegistrationModuleMRMLPythonD.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules" TYPE SHARED_LIBRARY FILES "/home/andreas/code/Slicer-Featurelets_4.5/lib/Slicer-4.5/qt-loadable-modules/libvtkSlicerRegistrationModuleMRMLPythonD.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libvtkSlicerRegistrationModuleMRMLPythonD.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libvtkSlicerRegistrationModuleMRMLPythonD.so")
    file(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libvtkSlicerRegistrationModuleMRMLPythonD.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/libvtkSlicerRegistrationModuleMRMLPythonD.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/vtkSlicerRegistrationModuleMRMLPython.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/vtkSlicerRegistrationModuleMRMLPython.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/vtkSlicerRegistrationModuleMRMLPython.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules" TYPE MODULE FILES "/home/andreas/code/Slicer-Featurelets_4.5/lib/Slicer-4.5/qt-loadable-modules/vtkSlicerRegistrationModuleMRMLPython.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/vtkSlicerRegistrationModuleMRMLPython.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/vtkSlicerRegistrationModuleMRMLPython.so")
    file(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/vtkSlicerRegistrationModuleMRMLPython.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/vtkSlicerRegistrationModuleMRMLPython.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/Slicer-4.5/qt-loadable-modules/Python" TYPE DIRECTORY FILES "/home/andreas/code/Slicer-Featurelets_4.5/lib/Slicer-4.5/qt-loadable-modules/Python/" USE_SOURCE_PERMISSIONS)
endif()

