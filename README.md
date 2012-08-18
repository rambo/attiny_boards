# ATTiny breakout boards

Collection of various more or less prototype board designs for breaking
out SMD ATTinys.

The SMD parts are cheaper than DIP and I've grown tired of drilling holes
anyway, besides this way I can add some essential supporting hardware like
the ISP header on the same board.

## The designs

  - attiny85_bo_1l.brd: this is a very quick design meant to be etched at home, thus in one layer. [Picture](https://picasaweb.google.com/117987945710555324615/Photoblog#5775454542780799554).
  - attiny85_bo.brd: A two-layer design that should be generally quite usable, still waiting for boards from Seeed Studio.
  - attiny85_pogo_pgm.brd: an attempt to make a pogo-pin programming header that connects directly to ATTiny85 (SOIC) feet.
  - attiny4313_bo.brd: A two-layer design (with a lot of vias so not really doable at home), still waiting for boards from Seeed Studio.
  - attiny84_bo.brd: A two-layer design that should be generally quite usable, still waiting for boards from Seeed Studio.

## TODO

  - Add diodes to protect against reverse and over -voltage
