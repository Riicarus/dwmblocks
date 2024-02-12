//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{ " ", "~/scripts/cpu.sh",		2,			0 },	/* Set first block's icon 1 char padding */
	{ "󱑌", "~/scripts/date.sh",		1,			0 },
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
