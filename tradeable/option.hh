///
/// finance/option_trading/option.hh
///
/// @brief define an option
///

#include <chrono>

#include "common/price.hh"

namespace finance::option_trading
{
	struct Option_t final
	{
		Price buy_price;
		Price sell_price;
		std::chrono::time_point<std::chrono::system_clock> expiry;
	}
}  // namespace finance::option_trading
