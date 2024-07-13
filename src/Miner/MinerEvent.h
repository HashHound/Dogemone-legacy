// Copyright (c) 2011-2024 The Cryptonote developers, Dogemone Project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

namespace Miner {

enum class MinerEventType: uint8_t {
  BLOCK_MINED,
  BLOCKCHAIN_UPDATED,
};

struct MinerEvent {
  MinerEventType type;
};

} //namespace Miner
