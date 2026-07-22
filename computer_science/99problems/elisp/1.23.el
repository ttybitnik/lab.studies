(defun tty/random-select (list n)
  (if (> n (length list))
      nil
    (let (extracted)
      (dotimes (i n extracted)
	(let* ((r (+ (random (length list)) 1))
	       (ptr (nthcdr (- r 2) list)))
	  (cond ((= r 1)
		 (push (pop list) extracted))
		((and (> r 0)
		      (<= r (length list)))
		 (push (car (cdr ptr)) extracted)
		 (setcdr ptr (cdr (cdr ptr))))
		(t
		 nil)))))))

(tty/random-select '(a b c d e f g h) 3)
;; => (f h a)
