function FizzBuzz(n)
	if n == 0 then
		return
	else
		FizzBuzz(n - 1)
		if n % 15 == 0 then
			print("FizzBuzz")
		elseif n % 3 == 0 then
			print("Fizz")
		elseif n % 5 == 0 then
			print("Buzz")
		else 
			print(n)
		end
	end
end

FizzBuzz(100)
