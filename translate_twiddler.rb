#!/usr/bin/env ruby -w

input_file = File.open('twiddler_keymap.txt', 'r')

outputs = []

class Chord
  def initialize(mode, input_chord, output_character)
    @mode = mode
    @chording = make_chord(input_chord)
    @output = output_character
  end

  def to_s
    "#{@output}: #{@chording}#{' += ' + @mode if @mode != 'O'}"
  end

  def make_chord(input)
    [  position_for_char('A', input[0]),
       position_for_char('B', input[1]),
       position_for_char('C', input[2]),
       position_for_char('D', input[3])
    ].compact.join(' + ')
  end

  def position_for_char(position, char)
    case char
    when 'L'
      "#{position}3"
    when 'M'
      "#{position}2"
    when 'R'
      "#{position}1"
    when 'O'
    else
      return nil
    end
  end
end

input_file.each_line do |line|
  words = line.split
  mode = words[0]
  input_chording = words[1]
  output = words[3]

  chord = Chord.new(mode, input_chording, output)
  puts chord
end

