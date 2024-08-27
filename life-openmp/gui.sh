# Script to generate gui layout

DATADIR="./data/raygui"

rguilayout -i "$DATADIR/lifegui.rgl" -o "src/interface.h" -t "$DATADIR/template.h"
