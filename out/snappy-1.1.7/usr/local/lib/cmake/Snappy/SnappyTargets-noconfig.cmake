#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Snappy::snappy" for configuration ""
set_property(TARGET Snappy::snappy APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(Snappy::snappy PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsnappy.1.1.7.dylib"
  IMPORTED_SONAME_NOCONFIG "@rpath/libsnappy.1.dylib"
  )

list(APPEND _IMPORT_CHECK_TARGETS Snappy::snappy )
list(APPEND _IMPORT_CHECK_FILES_FOR_Snappy::snappy "${_IMPORT_PREFIX}/lib/libsnappy.1.1.7.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
