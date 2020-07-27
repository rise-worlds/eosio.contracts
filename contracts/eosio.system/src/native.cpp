#include <eosio.system/native.hpp>

#include <eosio/check.hpp>

namespace eosiosystem {

   void native::onerror( ) {
      eosio::check( false, "the onerror action cannot be called directly" );
   }

}
