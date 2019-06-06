file(GLOB HEADERS "include/eosio/eosio_mqtt_plugin/*.hpp")
add_library( eosio_mqtt_plugin
             eosio_mqtt_plugin.cpp
             ${HEADERS} )

target_link_libraries( eosio_mqtt_plugin appbase fc )
target_include_directories( eosio_mqtt_plugin PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" )
