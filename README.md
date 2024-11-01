# BedWindow
# Language: C++
# Input: TXT
# Output: BED
# Tested with: PluMA 1.1, GCC 4.8.4
# bedtools

PluMA plugin that runs BedWindow.

The plugin expects as input a parameter file of tab-delimited keyword value pairs: 
makewindows
2000
100
gg
{print $_"\tbin_"i++}

Plugin output format: BED
