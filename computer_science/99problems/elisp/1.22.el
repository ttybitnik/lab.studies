(defun tty/range-int (s e)
  (let (list)
      (while (<= s e)
	(push s list)
	(setq s (+ s 1)))
      (nreverse list)))

(tty/range-int 4 9)
;; => (4 5 6 7 8 9)
