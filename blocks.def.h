//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{ " ", 	"~/scripts/blocks/cpu.sh",	2,		0 },	/* Set first block's icon 1 char padding */
	{ "󰰑", 	 	"~/scripts/blocks/mem.sh",	1,		0 },
	{ "",		"~/scripts/blocks/vol.sh", 	1,		0 },
	{ "", 		"~/scripts/blocks/wlan.sh",	1,		0 },
	{ "󱑌", 	 	"~/scripts/blocks/date.sh",	1,		0 },
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
