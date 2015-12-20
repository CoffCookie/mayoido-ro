
require 'benchmark'
result = Benchmark.realtime do
n = STDIN.gets
ans = 0.to_i
if n.to_i == 0 then
    print ans
    exit
end

x=1.to_i
y=1.to_i
z=0.to_i
i=1.to_i

while i <= n.to_i do
    if i == 1 then
        x = y + x
    else
        z = x
        x = y + x
        y = z
    end
    if (i%2) != 0 then
        ans = ans + x
    end
    i = i.to_i + 1
end

p ans
end
puts "#{result}s"
