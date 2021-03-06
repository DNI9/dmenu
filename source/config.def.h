/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom */
static int fuzzy = 1;                       /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int center = 0;                      /* -c  option; if 0, dmenu won't be centered on the screen */
static int min_width = 500;                 /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] =
{
	"JetBrainsMono Nerd Font:regular:pixelsize=15"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */


static
const
char *colors[][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#292c3c" },
	[SchemeSel]  = { "#181926", "#8aadf4" },
	[SchemeOut]  = { "#232634", "#b7bdf8" },
	[SchemeBorder] = { "#232634", "#8aadf4" },
	[SchemeSelHighlight]  = { "#8aadf4", "#232634" },
	[SchemeNormHighlight] = { "#f0c6c6", "#292c3c" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -g option; if nonzero, dmenu uses a grid comprised of columns and lines */
static unsigned int columns    = 0;
static unsigned int lineheight = 35;         /* -h option; minimum height of a menu line     */
static unsigned int min_lineheight = 15;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
