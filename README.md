# ATTiny breakout boards

Collection of various more or less prototype board designs for breaking
out SMD ATTinys.

The SMD parts are cheaper than DIP and I've grown tired of drilling holes
anyway, besides this way I can add some essential supporting hardware like
bypass caps and the ISP header on the same board (optionally also xtal)

Arduino support for these chips is available from the [arduino-tiny](https://github.com/rambo/arduino-tiny) project, 
see also [this tutorial](http://hlt.media.mit.edu/?p=1695) by High-Low Tech.

I personally have found using the ArduinoISP a bit hit-and-miss, so I suggest investing on a proper ISP (some of the clones work better
than others but I decided to get a genuine AVRISPmkII after spending an evening battling with ArduinoISP)

## The designs

  - attiny85_bo_1l.brd: this is a very quick design for ATTiny25/45/85 chips meant to be etched at home, thus in one layer. [Picture](https://picasaweb.google.com/lh/photo/0eMphjL9Uqn8iMIKu49FZNMTjNZETYmyPJy0liipFm0?feat=directlink).
  - attiny85_bo.brd: A two-layer design for ATTiny25/45/85 chips that should be generally quite usable. [Picture](https://picasaweb.google.com/lh/photo/wWMrBrGMo7IKX4xKiI6fBtMTjNZETYmyPJy0liipFm0?feat=directlink).
    - First revisions of the board had a silkscreen error, PB1 and PB2 were reversed (my bad).
    - For some reason the very first revision has much nicer silkscreen than the next, they were (likely) manufactured in different batches but I should doublecheck line widths etc.
  - attiny4313_bo.brd: A two-layer design (with a lot of vias so not really doable at home).
    - Got the boards, silkscreen is fine on these, [picture](https://picasaweb.google.com/lh/photo/29UdsFFLtWyybYlaUJ8i69MTjNZETYmyPJy0liipFm0?feat=directlink).
  - attiny84_bo.brd: A two-layer design that should be generally quite usable.
    - Got the boards, silkscreen is fine on these, [picture](https://picasaweb.google.com/lh/photo/29UdsFFLtWyybYlaUJ8i69MTjNZETYmyPJy0liipFm0?feat=directlink).
  - attiny1634_bo.brd: First revision of this board/schematic had a bug in the part definition. Thus a [trace must be cut](https://picasaweb.google.com/lh/photo/p4AA6TQTbEzGxg4LxbUNLtMTjNZETYmyPJy0liipFm0?feat=directlink) and a jumper wire added.
    - arduino-tiny support for this chip is still [experimental](https://github.com/rambo/arduino-tiny/tree/attiny1634)
  - attiny85_pogo_pgm.brd: an attempt to make a pogo-pin programming header that connects directly to ATTiny85 (SOIC) feet.
    - This proved to be rather misguided, it will require very carefull alignment rig but if I get the need of mass programming unsoldered chips I might still do it.

## TODO

  - Add diodes to protect against reverse and over -voltage (with indicator led ?)
  - simple board to break the ISP header into normal 2.54mm pitch pogo-pins in the same order (those pins unfortunately do not fit)
    into the cable connector directly), did this on stripboard and then realized dotboard would have been much better.
