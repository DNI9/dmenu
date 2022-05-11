/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* -b  option; if 0, dmenu appears at bottom     */
static int topbar = 1;

/*use the -c flag to get it to center*/
static int centered = 0;
static int min_width = 400;
static const char *fonts[] = {"JetBrainsMono Nerd Font:regular:pixelsize=15" };
/* -p  option; prompt to the left of input field */
static const char *prompt = NULL;
static const char *colors[SchemeLast][2] = {
	[SchemeNorm]					= 	{ "#D9E0EE", 	"#1A1826" },
	[SchemeSel] 					=  	{ "#1A1826", 	"#96CDFB" },
	[SchemeOut] 					=  	{ "#D9E0EE", 	"#89DCEB" },
	[SchemeSelHighlight] 	= 	{	"#DDB6F2",	"#1A1826"	},
	[SchemeNormHighlight] = 	{	"#302D41",	"#96CDFB"	},
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
static unsigned int lineheight = 30;
static unsigned int min_lineheight = 10;
/* Size of the window border */
static const unsigned int border_width = 1;
