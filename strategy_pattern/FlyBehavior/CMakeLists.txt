set(SOURCE
   ${SOURCE}
   ${CMAKE_CURRENT_SOURCE_DIR}/SimpleFly.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/SuperFly.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/NoFly.cpp
   PARENT_SCOPE
)
set(HEADERS
   ${HEADERS}
   ${CMAKE_CURRENT_SOURCE_DIR}/IFlyBehavior.h
   ${CMAKE_CURRENT_SOURCE_DIR}/SimpleFly.h
   ${CMAKE_CURRENT_SOURCE_DIR}/SuperFly.h
   ${CMAKE_CURRENT_SOURCE_DIR}/NoFly.h
   PARENT_SCOPE
)