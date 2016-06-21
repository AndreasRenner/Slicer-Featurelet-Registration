cmake_minimum_required(VERSION 2.8.9)

project(Slicer-Featurelets_4.5)

#-----------------------------------------------------------------------------
# Extension meta-information
set(EXTENSION_HOMEPAGE "https://www.slicer.org/slicerWiki/index.php/Documentation/Nightly/Extensions/Slicer-Featurelets")
set(EXTENSION_CATEGORY "Registration")
set(EXTENSION_CONTRIBUTORS "Andreas Renner, Hugo Furtado")
set(EXTENSION_DESCRIPTION "The extension Slicer-Featurelets consists of a single Module called Featurelet-Registration. This module provides a featurelet-based, piecewise rigid, deformable image registration method. The output is a deformed image and a deformation field.")
set(EXTENSION_SCREENSHOTURLS "https://www.slicer.org/slicerWiki/images/e/e5/ModuleWidgetFeatureletRegistration.png")

#-----------------------------------------------------------------------------
# Extension dependencies
find_package(Slicer REQUIRED)
include(${Slicer_USE_FILE})

#-----------------------------------------------------------------------------
# Extension modules
add_subdirectory(Featurelets-Registration)
## NEXT_MODULE

#-----------------------------------------------------------------------------
include(${Slicer_EXTENSION_CPACK})
