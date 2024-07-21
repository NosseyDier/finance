///
/// tradeable/option.hh
///
/// @brief define an option
///

#include <chrono>

#include "common/price.hh"
#include "common/ticker.hh"

namespace finance::option_trading
{
	template <Currency CURRENCY,
		  Exchange EXCHANGE>
	struct Option final
	{
		Ticker<EXCHANGE> ticker;
		Price<CURRENCY> buy_price;
		Price<CURRENCY> sell_price;
		std::chrono::time_point<std::chrono::system_clock> expiry;
	}
}  // namespace finance::option_trading
