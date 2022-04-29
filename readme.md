# Planck Layout
[KPRepublic](https://kprepublic.com/collections/bm40) - BM40 1x2u

Configured with [QMK](https://github.com/qmk/qmk_firmware/) for US ANSI international keyboard layout. German and turkish special chars should be written via alt gr/compose. 

## Flashing

```bash
qmk compile -kb bm40hsrgb -km sco
qmk flash -kb bm40hsrgb -km sco -bl dfu
```

Use docker instead: 

```bash
sudo util/docker_build.sh kprepublic/bm40hsrgb:sco
sudo util/docker_build.sh kprepublic/bm40hsrgb:sco:flash
```

# Layouts

## QWERTZ

<table align="center">
	   <tr align="center">
<td>  Tab  </td><td>   Q   </td><td>   W   </td><td>   E   </td><td>   R   </td><td>   T   </td><td>   Z   </td><td>   U   </td><td>   I   </td><td>   O   </td><td>   P   </td><td> Bkspsc</td>
	  </tr><tr align="center">
<td>  Fn1  </td><td>   A   </td><td>   S   </td><td>   D   </td><td>   F   </td><td>   G   </td><td>   H   </td><td>   J   </td><td>   K   </td><td>   L   </td><td>   '   </td><td> /       </td>
	  </tr><tr align="center">
<td> LShift</td><td>   Y   </td><td>   X   </td><td>   C   </td><td>   V   </td><td>   B   </td><td>   N   </td><td>   M   </td><td>   ,   </td><td>   .   </td><td>  AUp  </td><td>  Enter  </td>
	 </tr><tr align="center">
<td>  Esc  </td><td>  GUI  </td><td> LCtrl </td><td> LAlt  </td><td> Lower </td><td colspan="2"> Space     </td><td> Raise </td><td>  AltGr  </td><td> ALeft </td><td> ADown </td><td> ARight</td>
	  </tr>
</table>

## Lower

WASD Navi + Numpad

<table align="center">
	   <tr align="center">
<td>  TAB  </td><td>  PUp  </td><td>  Up   </td><td> PDow  </td><td> Home  </td><td>       </td><td>       </td><td>  7(/) </td><td>  8(() </td><td>  9()) </td><td>  0(=) </td><td>BackSpc</td>
	  </tr><tr align="center">
<td>  Fn1  </td><td>  Left </td><td>  Down </td><td> Right </td><td>  End  </td><td>       </td><td>       </td><td>  4($) </td><td>  5(%) </td><td>  6(&) </td><td>       </td><td>   /   </td>
	  </tr><tr align="center">
<td> Shift </td><td>  Mute </td><td>  VUp  </td><td>  VDo  </td><td>  PP   </td><td>  Prev </td><td> Next  </td><td>  1(!) </td><td>  2(") </td><td>  3(§) </td><td>   +   </td><td> Enter </td>
	  </tr><tr align="center">
<td>  ESC  </td><td>  RGB Toogle </td><td> LCtrl </td><td> LAlt  </td><td> Lower </td><td colspan="2">  Space    </td><td>   ,   </td><td>  0(=) </td><td>   .   </td><td>  -(_) </td><td>         </td>
	  </tr>
</table>


## Fn1

F-Keys + HJKL Navi + Browsing

<table align="center">
	   <tr align="center">
<td>  F12  </td><td>  F1   </td><td>  F2   </td><td>  F3   </td><td>  F4   </td><td>  F5   </td><td>  F6   </td><td>  F7   </td><td>  F8   </td><td>  F9   </td><td>  F10  </td><td>  Del  </td>
	  </tr><tr align="center">
<td>  Fn1  </td><td>  F11  </td><td>       </td><td>       </td><td>   T   </td><td>       </td><td> Home  </td><td> PDown </td><td>  PUp  </td><td>  End  </td><td>       </td><td>        </td>
	  </tr><tr align="center">
<td> LShift</td><td>  Caps </td><td>       </td><td>       </td><td>       </td><td>       </td><td> ALeft </td><td> ADown </td><td>  AUp  </td><td> ARight</td><td>       </td><td> MRight</td>
	  </tr><tr align="center">
<td>       </td><td>       </td><td>       </td><td>       </td><td> Lower </td><td colspan="2">     Space     </td><td> Raise </td><td>  AltGr  </td><td>       </td><td>       </td><td>  Ins  </td>
	  </tr>
</table>


## Raise

Top Numbers + Bottom chars

<table align="center">
	   <tr align="center">
<td>   ^   </td><td>   !   </td><td>   @   </td><td>       </td><td>   $   </td><td>   %   </td><td>   &   </td><td>   *   </td><td>   (   </td><td>    )  </td><td>   ?   </td><td>   ~   </td>
	  </tr><tr align="center">
<td>  Fn1  </td><td>       </td><td>       </td><td>       </td><td>   €   </td><td>       </td><td>       </td><td>       </td><td>  [({) </td><td>  ](}) </td><td>   '   </td><td>  /(|) </td>
	  </tr><tr align="center">
<td> Shift </td><td>   -   </td><td>       </td><td>       </td><td>       </td><td>       </td><td>       </td><td>       </td><td>   <   </td><td>   >   </td><td>  =(+) </td><td>   #   </td>
	  </tr><tr align="center">
<td>  Esc  </td><td>  GUI  </td><td> LCtrl </td><td> LAlt  </td><td> Lower </td><td colspan="2">     Space     </td><td> Raise </td><td>  AltGr  </td><td>       </td><td>       </td><td>       </td>
	  </tr>
</table>

