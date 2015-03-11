# This work is licensed under the Creative Commons Attribution-ShareAlike 4.0 International License. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/.

# square part of trumpet
[chan:=base+0]
[tVol:=2*VOL/5]
<chan> /
  NPS <NPS>
  Fill 32
  MaxVol <tVol>
  A 200
  D 350
  S 100
  R 60
  Filter 3500
  LFODepth 120
  LFOFreq 7
  LFOPhase 134
  Glide 50
/
