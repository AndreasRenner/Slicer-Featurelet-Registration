# CMake generated Testfile for 
# Source directory: /home/andreas/code/Slicer-Featurelets/Featurelets-Registration
# Build directory: /home/andreas/code/Slicer-Featurelets_4.5/Featurelets-Registration
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(qSlicerRegistrationModuleGenericTest "/home/andreas/Slicer-SuperBuild-Release_4.5/Slicer-build/Slicer" "--launcher-no-splash" "--launcher-additional-settings" "/home/andreas/code/Slicer-Featurelets_4.5/AdditionalLauncherSettings.ini" "--launch" "/home/andreas/code/Slicer-Featurelets_4.5/bin/qSlicerRegistrationModuleGenericCxxTests" "qSlicerRegistrationModuleGenericTest")
set_tests_properties(qSlicerRegistrationModuleGenericTest PROPERTIES  LABELS "qSlicerRegistrationModule")
add_test(qSlicerRegistrationModuleWidgetGenericTest "/home/andreas/Slicer-SuperBuild-Release_4.5/Slicer-build/Slicer" "--launcher-no-splash" "--launcher-additional-settings" "/home/andreas/code/Slicer-Featurelets_4.5/AdditionalLauncherSettings.ini" "--launch" "/home/andreas/code/Slicer-Featurelets_4.5/bin/qSlicerRegistrationModuleGenericCxxTests" "qSlicerRegistrationModuleWidgetGenericTest")
set_tests_properties(qSlicerRegistrationModuleWidgetGenericTest PROPERTIES  LABELS "qSlicerRegistrationModule")
subdirs(MRML)
subdirs(Logic)
subdirs(Testing)
