(define (tty/find-last-tco lst)
  (cond ((null? (cdr lst))
	 (car lst))
	((null? lst)
	 (display "List is empty.\n"))
	(else
	 (tty/find-last (cdr lst)))))

(tty/find-last-tco '(a b c d))
;; => d
