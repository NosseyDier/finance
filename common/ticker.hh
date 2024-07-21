///
/// common/ticker.hh
///
/// @brief Header file for a ticker
///

#include <cstdint>

#include "common/exchange.hh"

namespace finance
{
constexpr const uint8_t MAX_TICKER_LENGTH{5U};

template <Exchange EXCHANGE>
struct Ticker final
{
	char[MAX_TICKER_LENGTH] ticker;
}
}  // namespace finance
