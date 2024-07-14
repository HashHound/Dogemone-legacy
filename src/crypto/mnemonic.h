#ifndef MNEMONIC_H
#define MNEMONIC_H

#include <string>
#include "crypto/crypto.h"

std::string generate_mnemonic(const Crypto::SecretKey& spendSecretKey);
bool parse_mnemonic(const std::string& mnemonic, Crypto::SecretKey& spendSecretKey);

#endif // MNEMONIC_H
