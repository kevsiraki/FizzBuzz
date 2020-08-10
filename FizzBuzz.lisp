(defun fizzbuzz (n)
	(if (and (= (mod n 5) 0) (= (mod n 3) 0))
		(format t "FizzBuzz~%")
		(if (= (mod n 3) 0)
			(format t "Fizz~%")
			(if (= (mod n 5) 0)
				(format t "Buzz~%")
				(progn 
					(write n)
					(terpri))))))
  
(loop for i from 1 to 100
      do (fizzbuzz i))

