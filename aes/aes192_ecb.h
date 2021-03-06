#ifndef AES192_ECB_H
#define AES192_ECB_H

#include <stdint.h> // uint8_t
#include <stddef.h> // size_t



int aes192_ecb_encrypt(const uint8_t *input, size_t inputSize, const uint8_t *key, size_t keySize, uint8_t *output, size_t outputSize);

int aes192_ecb_decrypt(const uint8_t *input, size_t inputSize, const uint8_t *key, size_t keySize, uint8_t *output, size_t outputSize);



#endif

