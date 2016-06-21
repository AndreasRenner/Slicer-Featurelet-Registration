/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH) 
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerRegistrationModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerRegistrationModuleExport captures some system differences between Unix
// and Windows operating systems. 

#ifndef __qSlicerRegistrationModuleExport_h
#define __qSlicerRegistrationModuleExport_h

#if defined(WIN32) && !defined(qSlicerRegistrationModule_STATIC)
 #if defined(qSlicerRegistrationModule_EXPORTS)
  #define Q_SLICER_QTMODULES_REGISTRATION_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_REGISTRATION_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_REGISTRATION_EXPORT
#endif

#endif
