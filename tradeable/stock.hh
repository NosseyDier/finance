///
/// finance/tradeable/stock.hh
///
/// @brief header for stock
///

#include <chrono>

#include "common/price.hh"
#include "common/ticker.hh"

namespace finance
{
	template <Currency CURRENCY,
		  Exchange EXCHANGE>
	struct Stock final
	{
		Ticker<EXCHANGE> ticker;
		Price<CURRENCY> price;
		std::chrono::time_point<std::chrono::system_clock> time;
	}
}
