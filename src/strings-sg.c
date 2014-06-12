#include "strings-sg.h"

const char* const HOURS_SG[] = {
  // AM hours
  "zwöufi",
  "eis",
  "zwöi",
  "drü",
  "vieri",
  "füfi",
  "sächsi",
  "sibni",
  "achti",
  "nüni",
  "zähni",
  "eufi",

  // PM hours
  "zwöufi",
  "eis",
  "zwöi",
  "drü",
  "vieri",
  "füfi",
  "sächsi",
  "sibni",
  "achti",
  "nüni",
  "zähni",
  "eufi",
};

/**
 * The string "$1" will be replaced with the current hour (e.g., "three"
 * at 3:45).  The string "$2" will be replaced with the *next* hour
 * (e.g., "four" at 3:45).
 *
 * A "*" character before a word makes that word bold.
 */
const char* const RELS_SG[] = {
  "*$1",
  "füf ab *$1",
  "zäh ab *$1",
  "vieru ab *$1",
  "zwänzg ab *$1",
  "füf vor haubi *$2",
  "haubi *$2",
  "füf ab haubi *$2",
  "zwänzg vor *$2",
  "viertu vor *$2",
  "zäh vor *$2",
  "füf vor *$2"
};
