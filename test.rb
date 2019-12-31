require_relative './test.so'

i = 42

j = dup_obj(i)

puts "Value:#{i}, ID:#{i.object_id}"
puts "Value:#{j}, ID:#{j.object_id}"

puts Hoge.class