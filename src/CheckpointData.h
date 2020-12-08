
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
    //{0, "f204990ad47bf5cfa8ead24383ebfc99c099bfff446f272cffbc169ab3de1e0d"},
   {15191, "983ccab3bc1dbd67d2f7caef25571e91f2ab1f3f7fbfb9437033c2c01e1440a1"},  
   {16334, "74ac00598a5e89b5a865919758bbeef3513c6d8a75d4ea315c0cdd7350106809}
       };
} // namespace CryptoNote
