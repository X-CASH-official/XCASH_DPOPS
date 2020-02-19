#ifndef NETWORK_DAEMON_FUNCTIONS_H_   /* Include guard */
#define NETWORK_DAEMON_FUNCTIONS_H_

/*
-----------------------------------------------------------------------------------------------------------
Function prototypes
-----------------------------------------------------------------------------------------------------------
*/

int check_if_blockchain_is_fully_synced(void);
int get_block_template(char *result);
int submit_block_template(const char* DATA);
int get_block_reserve_byte_data_hash(char *reserve_byte_data_hash, const char* BLOCK_HEIGHT);
int verify_blockchain_network_transactions(char* transactions[], const size_t AMOUNT_OF_TRANSACTIONS, const int TRANSACTION_SETTINGS);
int get_current_block_height(char *result);
int get_previous_block_hash(char *result);
int get_path(char *result);
int get_previous_block_information(char *block_hash, char *block_reward, char *block_date_and_time);
int check_found_block(void);
#endif