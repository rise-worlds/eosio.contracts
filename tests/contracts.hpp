#pragma once
#include <eosio/testing/tester.hpp>

namespace eosio { namespace testing {

struct contracts {
   static std::vector<uint8_t> system_wasm() { return read_wasm("/Users/judgefudge/eosio.contracts/eosio.system/bin/eosio.system.wasm"); }
   static std::string          system_wast() { return read_wast("/Users/judgefudge/eosio.contracts/eosio.system/bin/eosio.system.wast"); }
   static std::vector<char>    system_abi() { return read_abi("/Users/judgefudge/eosio.contracts/eosio.system/bin/eosio.system.abi"); }
   static std::vector<uint8_t> token_wasm() { return read_wasm("/Users/judgefudge/eosio.contracts/eosio.token/bin/eosio.token.wasm"); }
   static std::string          token_wast() { return read_wast("/Users/judgefudge/eosio.contracts/eosio.token/bin/eosio.token.wast"); }
   static std::vector<char>    token_abi() { return read_abi("/Users/judgefudge/eosio.contracts/eosio.token/bin/eosio.token.abi"); } 
   static std::vector<uint8_t> msig_wasm() { return read_wasm("/Users/judgefudge/eosio.contracts/eosio.msig/bin/eosio.msig.wasm"); }
   static std::string          msig_wast() { return read_wast("/Users/judgefudge/eosio.contracts/eosio.msig/bin/eosio.msig.wast"); }
   static std::vector<char>    msig_abi() { return read_abi("/Users/judgefudge/eosio.contracts/eosio.msig/bin/eosio.msig.abi"); }
   static std::vector<uint8_t> sudo_wasm() { return read_wasm("/Users/judgefudge/eosio.contracts/eosio.sudo/bin/eosio.sudo.wasm"); }
   static std::string          sudo_wast() { return read_wast("/Users/judgefudge/eosio.contracts/eosio.sudo/bin/eosio.sudo.wast"); }
   static std::vector<char>    sudo_abi() { return read_abi("/Users/judgefudge/eosio.contracts/eosio.sudo/bin/eosio.sudo.abi"); }
   
   struct util {
      static std::vector<uint8_t> test_api_wasm() { return read_wasm("/Users/judgefudge/eosio.contracts/tests/test_contracts/test_api.wasm"); }
      static std::vector<uint8_t> exchange_wasm() { return read_wasm("/Users/judgefudge/eosio.contracts/tests/test_contracts/exchange.wasm"); }
   };
};
}} //ns eosio::testing
