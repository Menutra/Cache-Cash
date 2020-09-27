
#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
	struct CheckpointData {
    uint32_t height;
    const char *blockId;
	};

#ifdef __GNUC__
  __attribute__((unused))
#endif

  /**
   * @param CheckpointData Uses data to help sync with the network quicker and to avoid split-chains.
   */
  const std::initializer_list<CheckpointData> CHECKPOINTS = {  
    //{0, "b9dc432e56e37b52771970ce014dd23fda517cfd4fc5a9b296f1954b7d4505de"}
	};
} // namespace CryptoNote