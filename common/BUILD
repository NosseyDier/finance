cc_library(
	name = "currency",
	hdrs = [
		"currency.hh",
	],
	visibility = [
		"//tradeable:__subpackages__",
	],
)

cc_library(
	name = "exchange",
	hdrs = [
		"exchange.hh",
	],
	visibility = [
		"//tradeable:__subpackages__",
	],
)

cc_library(
	name = "price",
	hdrs = [
		"price.hh",
	],
	deps = [
		"//common:currency",
	],
	visibility = [
		"//tradeable:__subpackages__",
	],
)

cc_library(
	name = "ticker",
	hdrs = [
		"ticker.hh",
	],
	deps = [
		"//common:exchange",
	],
	visibility = [
		"//tradeable:__subpackages__",
	],
)
