# Chording

This is a repo to hold code and research related to building my own chording keyboard. This project is mostly for novelty; I am not all that interested in trying to design and build a chording keyboard that is more efficient than QWERTY. And I'm certainly not interested in producing one as a commercial product.

In a lot of ways, a chording keyboard is not as good as a traditional QWERTY (typewriter layout) keyboard, but it has some strengths. I hope to gain basic proficiency on the chording keyboard, as well as create useful keyboard combos that I can trigger easily through the chording keyboard. (Perhaps by creating vim and emacs modes.)

The goal is that this chording keyboard will supplement my regular keyboard rather than replace it.

For reference, see my blog posts on the subject:

* [Building a Chording Keyboard: Progress So Far](http://blog.mattgauger.com/blog/2013/08/03/building-a-chording-keyboard-lessons-learned-and-progress-so-far/)
* [A Simple Text Editor Foot Pedal](http://blog.mattgauger.com/blog/2013/08/06/a-simple-text-editor-foot-pedal/)

## Hardware

* Teensy 3.0
* Razer Nostromo, heavily modified
* Cherry MX brown switches
* WASDKeyboards numpad key cap set
* Sparkfun joystick (very similar to the XBox controller joysticks)
* Green LEDs

The blog posts referenced above describe how I built my keyboard and other details.


## Layout

I am planning to use the [TabSpace layout](http://rhodesmill.org/brandon/projects/tabspace-guide.pdf) (PDF), which was originally designed for the Twiddler chording keyboard, with modifications for this keyboard's layout and for its additional capability for mode switching.

The current layout can be found in the [TabSpace Reference Sheet](http://rhodesmill.org/brandon/projects/tabspace-ref.pdf) which is the current key layout plan until I have time to use the keyboard and make changes.

Research on layouts:

* Previous research file [mapping.txt](https://github.com/mathias/chording/blob/269163b91a91b963d327a7377ae1e71d323541ad/mapping.txt) which references:
* [mtgap - theory of letter frequency](http://mtgap.bilfo.com/theory-of-letter-frequency.html)
* [mtgap - letter frequency](http://mtgap.bilfo.com/letter_frequency.html)

## License

Copyright (c) 2013 Matt Gauger

MIT License

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


