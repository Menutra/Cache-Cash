// Copyright (c) 2011-2017 The Cryptonote Developers
// Copyright (c) 2017-2018 The Circle Foundation & Conceal Devs
// Copyright (c) 2018-2019 Conceal Network & Conceal Devs
//
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <cstdint>
#include <initializer_list>

namespace CryptoNote {
  namespace parameters {
    const uint64_t MAX_BLOCK_NUMBER = 500000000;
    const size_t   MAX_BLOCK_BLOB_SIZE = 500000000;
    const size_t   MAX_TX_SIZE = 1000000000;

    /* cxche address prefix */
    const uint64_t PUBLIC_ADDRESS_BASE58_PREFIX = 0x29c7dd6;
    /* 20 minutes */
    const size_t   MINED_COINS_UNLOCK_WINDOW = 10;
    const uint64_t DEFAULT_TX_SPENDABLE_AGE = 10;

    const uint64_t MONEY_SUPPLY = UINT64_C(50000000000000);
    const size_t   MINIMUM_MIXIN = 4;
    const size_t   DECIMAL_POINT = 5;
    const uint64_t COIN = UINT64_C(100000);
    const uint64_t MINIMUM_FEE = UINT64_C(100);
    const uint64_t MINIMUM_FEE_BANKING = UINT64_C(100);
    const uint64_t POINT = UINT64_C(100);
    const uint64_t DEFAULT_DUST_THRESHOLD = UINT64_C(10);

    const uint64_t MULTIPLIER_FACTOR = 100;
    const uint32_t END_MULTIPLIER_BLOCK = 12750;

    /* two minutes */
    const uint64_t DIFFICULTY_TARGET = 120; 
    const size_t   DIFFICULTY_WINDOW = 120;
    /* Works with LWMA3 */
    const uint64_t BLOCK_FUTURE_TIME_LIMIT = 360;
    const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW = 11;
    const size_t   DIFFICULTY_BLOCKS_COUNT = DIFFICULTY_WINDOW + 1;
    /* 720 blocks */
    const uint64_t EXPECTED_NUMBER_OF_BLOCKS_PER_DAY = 24 * 60 * 60 / DIFFICULTY_TARGET;

    const size_t   REWARD_BLOCKS_WINDOW = 100;
    const size_t   COINBASE_BLOB_RESERVED_SIZE = 600;
    const size_t   BLOCK_GRANTED_FULL_REWARD_ZONE = 100000;

    const uint64_t DEPOSIT_MIN_AMOUNT = 1 * COIN;
    /* one week */
    const uint32_t DEPOSIT_MIN_TERM = 21900;
    /* one year */
    const uint32_t DEPOSIT_MAX_TERM = 1 * 12 * 21900;
    const uint64_t DEPOSIT_MIN_TOTAL_RATE_FACTOR = 0;
    const uint64_t DEPOSIT_MAX_TOTAL_RATE = 4;

    const size_t   MAX_BLOCK_SIZE_INITIAL = BLOCK_GRANTED_FULL_REWARD_ZONE * 10;
    const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR = 100 * 1024;
    const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR = 365 * 24 * 60 * 60 / DIFFICULTY_TARGET;
    const uint64_t LOCKED_TX_ALLOWED_DELTA_BLOCKS = 1;
    const uint64_t LOCKED_TX_ALLOWED_DELTA_SECONDS = DIFFICULTY_TARGET * LOCKED_TX_ALLOWED_DELTA_BLOCKS;
    const size_t   MAX_TX_SIZE_LIMIT = BLOCK_GRANTED_FULL_REWARD_ZONE - COINBASE_BLOB_RESERVED_SIZE;
    const size_t   OPTIMIZE_SIZE = 100;
    const uint64_t MEMPOOL_TX_LIVETIME = (60 * 60 * 12);
    const uint64_t MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME = (60 * 60 * 12);
    const uint64_t NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL = 7;
    const size_t   FUSION_TX_MAX_SIZE = BLOCK_GRANTED_FULL_REWARD_ZONE * 30 / 100;
    const size_t   FUSION_TX_MIN_INPUT_COUNT = 12;
    const size_t   FUSION_TX_MIN_IN_OUT_COUNT_RATIO = 4;

    const uint64_t UPGRADE_HEIGHT = 1;
    const uint64_t UPGRADE_HEIGHT_V2 = 2;

    const unsigned UPGRADE_VOTING_THRESHOLD = 90; 
    const size_t   UPGRADE_VOTING_WINDOW = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;
    const size_t   UPGRADE_WINDOW = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;

    static_assert(DEPOSIT_MIN_TERM > 0, "Bad DEPOSIT_MIN_TERM");
    static_assert(DEPOSIT_MIN_TERM <= DEPOSIT_MAX_TERM, "Bad DEPOSIT_MAX_TERM");
    static_assert(DEPOSIT_MIN_TERM * DEPOSIT_MAX_TOTAL_RATE > DEPOSIT_MIN_TOTAL_RATE_FACTOR, "Bad DEPOSIT_MIN_TOTAL_RATE_FACTOR or DEPOSIT_MAX_TOTAL_RATE");
    static_assert(0 < UPGRADE_VOTING_THRESHOLD && UPGRADE_VOTING_THRESHOLD <= 100, "Bad UPGRADE_VOTING_THRESHOLD");
    static_assert(UPGRADE_VOTING_WINDOW > 1, "Bad UPGRADE_VOTING_WINDOW");
  } // namespace parameters

	/* 5 */
	const uint64_t START_BLOCK_REWARD = (UINT64_C(5000) * parameters::POINT);
	/* 15m */
	const uint64_t FOUNDATION_TRUST = (UINT64_C(15000000) * parameters::COIN);
	/* 60 days */  
	const uint64_t REWARD_INCREASE_INTERVAL = (parameters::EXPECTED_NUMBER_OF_BLOCKS_PER_DAY * 60);

	const char     PROJECT_NAME[] = "Cache";
	const char     DATA_DIR[] = "cache-blockchain-data-testnet";

	const char     GENESIS_COINBASE_TX_HEX[] = "010a01ff0001c096b102029b2e4c0281c0b02e7c53291a94d1d0cbff8883f8024f5142ee494ffbbd08807121017d6775185749e95ac2d70cae3f29e0e46f430ab648abbe9fdc61d8e7437c60f8";
	const uint32_t GENESIS_NONCE = 10000;
	const uint64_t GENESIS_TIMESTAMP = 1527078920;

	const int      P2P_DEFAULT_PORT = 39999;
	const int      RPC_DEFAULT_PORT = 40000;

	const uint8_t  P2P_CURRENT_VERSION = 1;
	const uint8_t  P2P_MINIMUM_VERSION = 1;
	const uint8_t  P2P_UPGRADE_WINDOW = 2;

	const uint8_t  TRANSACTION_VERSION_1 = 1;
	const uint8_t  TRANSACTION_VERSION_2 = 2;

	const uint8_t  BLOCK_MAJOR_VERSION_1 = 1;
	const uint8_t  BLOCK_MAJOR_VERSION_2 = 2;

	const uint8_t  BLOCK_MINOR_VERSION_0 = 0;
	const uint8_t  BLOCK_MINOR_VERSION_1 = 1;

	const size_t   BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT = 10000;
	const size_t   BLOCKS_SYNCHRONIZING_DEFAULT_COUNT = 128;
	const size_t   COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT = 1000;

	const size_t   P2P_LOCAL_WHITE_PEERLIST_LIMIT = 1000;
	const size_t   P2P_LOCAL_GRAY_PEERLIST_LIMIT = 5000;
	const size_t   P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE = 64 * 1024 * 1024;
	const uint32_t P2P_DEFAULT_CONNECTIONS_COUNT = 8;
	const size_t   P2P_DEFAULT_ANCHOR_CONNECTIONS_COUNT = 2;
	const size_t   P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT = 70;
	/* seconds */
	const uint32_t P2P_DEFAULT_HANDSHAKE_INTERVAL = 60;
	const uint32_t P2P_DEFAULT_PACKET_MAX_SIZE = 50000000;
	const uint32_t P2P_DEFAULT_PEERS_IN_HANDSHAKE = 250;
	/* 2 seconds */
	const uint32_t P2P_DEFAULT_PING_CONNECTION_TIMEOUT = 2000;
	/* 5 seconds */
	const uint32_t P2P_DEFAULT_CONNECTION_TIMEOUT = 5000;
	const size_t   P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT = 5000;
	/* 2 minutes */
	const uint64_t P2P_DEFAULT_INVOKE_TIMEOUT = 60 * 2 * 1000;
  /* "the cache project" hashed with sha256 */
	const char     P2P_STAT_TRUSTED_PUB_KEY[] = "5a1795d5c9c1c9d3fe1aa2cda90484787a10296e49cad387e9a9208ae78216ae";
} // namespace CryptoNote

#define ALLOW_DEBUG_COMMANDS
