
#include <eosio.test/eosio.test.hpp>
#include <eosio/privileged.hpp>

namespace eosiotest {

void test::hello( const eosio::name& name ) {
  
}

}

EOSIO_DISPATCH( eosiotest::test, (hello) )

// extern "C" {

// [[eosio::action]]
// void hello()
// {
   
// }

// [[eosio::wasm_entry]]
// void apply(uint64_t receiver0, uint64_t receiver1, uint64_t receiver2, uint64_t receiver3, 
//           uint64_t code0, uint64_t code1, uint64_t code2, uint64_t code3, 
//           uint64_t action0, uint64_t action1, uint64_t action2, uint64_t action3) {
//   eosio::name receiver(receiver0, receiver1, receiver2, receiver3);
//   eosio::name code(code0, code1, code2, code3);
//   eosio::name action(action0, action1, action2, action3);
//   eosio::print("hello!");
//   eosio::print(receiver);
//   eosio::print(code);
//   eosio::print(action);
// }

// }