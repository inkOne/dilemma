# Dilemma

The awesome dilemma keyboard 
https://github.com/Bastardkb/Dilemma

bastardkb firmware and dokumentation
https://github.com/Bastardkb/bastardkb-qmk

## AVR - pro micro 
The bastardkb firmware are all written for rp2040 Controllers.
At the moment of building my first diy dilemma, I didn't had an rp2040 so I add the avr controller.
To link the avr pro micro adaption into the qmk repository use:
```console
cd qmk/keyboards/bastardkb/dilemma/3x5_2
ln -s ../../../../../dilemma/avr avr
```

## keymap

linking the keymap
```console
cd keymaps
ln -s ../../../../../../dilemma/keymaps/ink ink
```


