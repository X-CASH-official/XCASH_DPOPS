#ifndef BLOCKCHAIN_FUNCTIONS_H_   /* Include guard */
#define BLOCKCHAIN_FUNCTIONS_H_

/*
-----------------------------------------------------------------------------------------------------------
Function prototypes
-----------------------------------------------------------------------------------------------------------
*/

size_t varint_decode(size_t varint);
int varint_encode(long long int number, char* result);
int network_block_string_to_blockchain_data(const char* data);
int blockchain_data_to_network_block_string(char* result);
int verify_network_block_data(const int BLOCK_VALIDATION_SIGNATURES_SETTINGS,const int TRANSACTIONS_SETTINGS);
#endif