#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "AcesContainer" for configuration ""
set_property(TARGET AcesContainer APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(AcesContainer PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/usr/local/lib/libAcesContainer.dylib"
  IMPORTED_SONAME_NOCONFIG "@rpath/libAcesContainer.dylib"
  )

list(APPEND _IMPORT_CHECK_TARGETS AcesContainer )
list(APPEND _IMPORT_CHECK_FILES_FOR_AcesContainer "/usr/local/lib/libAcesContainer.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
