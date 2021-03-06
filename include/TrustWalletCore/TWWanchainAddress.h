// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "TWBase.h"
#include "TWData.h"
#include "TWString.h"

TW_EXTERN_C_BEGIN

struct TWPublicKey;

/// Represents an Wanchain address.
TW_EXPORT_CLASS
struct TWWanchainAddress;

/// Compares two addresses for equality.
TW_EXPORT_STATIC_METHOD
bool TWWanchainAddressEqual(struct TWWanchainAddress *_Nonnull lhs, struct TWWanchainAddress *_Nonnull rhs);

/// Determines if the string is a valid address.
TW_EXPORT_STATIC_METHOD
bool TWWanchainAddressIsValidString(TWString *_Nonnull string);

/// Creates an address from a string representaion.
TW_EXPORT_STATIC_METHOD
struct TWWanchainAddress *_Nullable TWWanchainAddressCreateWithString(TWString *_Nonnull string);

/// Creates an address from a key hash.
TW_EXPORT_STATIC_METHOD
struct TWWanchainAddress *_Nullable TWWanchainAddressCreateWithKeyHash(TWData *_Nonnull keyHash);

/// Creates an address from a public key.
TW_EXPORT_STATIC_METHOD
struct TWWanchainAddress *_Nonnull TWWanchainAddressCreateWithPublicKey(struct TWPublicKey *_Nonnull publicKey);

TW_EXPORT_METHOD
void TWWanchainAddressDelete(struct TWWanchainAddress *_Nonnull address);

/// Returns the address string representation.
TW_EXPORT_PROPERTY
TWString *_Nonnull TWWanchainAddressDescription(struct TWWanchainAddress *_Nonnull address);

/// Returns the key hash.
TW_EXPORT_PROPERTY
TWData *_Nonnull TWWanchainAddressKeyHash(struct TWWanchainAddress *_Nonnull address);

TW_EXTERN_C_END
