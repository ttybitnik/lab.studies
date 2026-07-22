(defun tty/split-intotwo (list n)
  (let ((l1)
	(l2))
    (setq l1 (nthcdr (- (length list) n) (reverse list)))
    (setq l2 (nthcdr n list))
    (list (nreverse l1) l2)))

(tty/split-intotwo '(a b c d e f g h i k) 3)
;; => ((a b c) (d e f g h i k))

(defun tty/split-intotwo-ptr (list n)
  (let ((l1 (nthcdr (- n 1) list))
	(l2 (copy-sequence (nthcdr n list))))
    (cond ((and (> n 0)
		(< n (length list)))
	   (setq l1 (nconc list (setcdr l1 nil)))
	   (list l1 l2))
	  (t
	   nil))))

(tty/split-intotwo-ptr '(a b c d e f g h i k) 3)
;; => ((a b c) (d e f g h i k))
