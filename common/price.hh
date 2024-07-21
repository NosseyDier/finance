///
/// common/price.hh
///
/// @brief Represent a price with a currency
///

#include "common/currency.hh"

namespace finance
{
	template <Currency currency>
	struct Price : final
	{
		double price;
	}
}  // namespace finance
