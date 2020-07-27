#pragma once

#include <eosio/crypto.hpp>
#include <eosio/eosio.hpp>

namespace eosiotest {
    using eosio::action_wrapper;
    using eosio::check;
    using eosio::checksum256;
    using eosio::ignore;
    using eosio::name;

    class [[eosio::contract("eosio.test")]] test : public eosio::contract {
    public:
        using contract::contract;

        [[eosio::action]]
        void hello( const eosio::name& name );

        using hello_action = action_wrapper<NT(hello), &test::hello>;
    };
   /** @}*/ // end of @defgroup eosiotest eosio.test
} /// namespace eosiotest
