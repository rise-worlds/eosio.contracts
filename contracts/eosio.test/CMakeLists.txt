add_contract(eosio.test eosio.test ${CMAKE_CURRENT_SOURCE_DIR}/src/eosio.test.cpp)

target_include_directories(eosio.test
   PUBLIC
   ${CMAKE_CURRENT_SOURCE_DIR}/include)

set_target_properties(eosio.test
   PROPERTIES
   RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")

configure_file( ${CMAKE_CURRENT_SOURCE_DIR}/ricardian/eosio.test.contracts.md.in ${CMAKE_CURRENT_BINARY_DIR}/ricardian/eosio.test.contracts.md @ONLY )
# configure_file( ${CMAKE_CURRENT_SOURCE_DIR}/src/eosio.test.abi.in ${CMAKE_CURRENT_BINARY_DIR}/eosio.test.abi @ONLY )

target_compile_options( eosio.test PUBLIC -R${CMAKE_CURRENT_SOURCE_DIR}/ricardian -R${CMAKE_CURRENT_BINARY_DIR}/ricardian )
