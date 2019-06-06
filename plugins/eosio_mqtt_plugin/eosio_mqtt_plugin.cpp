/**
 *  @file
 *  @copyright defined in eos/LICENSE
 */
#include <eosio/eosio_mqtt_plugin/eosio_mqtt_plugin.hpp>

namespace eosio {
   static appbase::abstract_plugin& _eosio_mqtt_plugin = app().register_plugin<eosio_mqtt_plugin>();

class eosio_mqtt_plugin_impl {
   public:
};

eosio_mqtt_plugin::eosio_mqtt_plugin():my(new eosio_mqtt_plugin_impl()){}
eosio_mqtt_plugin::~eosio_mqtt_plugin(){}

void eosio_mqtt_plugin::set_program_options(options_description&, options_description& cfg) {
   cfg.add_options()
         ("option-name", bpo::value<string>()->default_value("default value"),
          "Option Description")
         ;
}

void eosio_mqtt_plugin::plugin_initialize(const variables_map& options) {
   try {
      if( options.count( "option-name" )) {
         // Handle the option
      }
   }
   FC_LOG_AND_RETHROW()
}

void eosio_mqtt_plugin::plugin_startup() {
   // Make the magic happen
}

void eosio_mqtt_plugin::plugin_shutdown() {
   // OK, that's enough magic
}

}
