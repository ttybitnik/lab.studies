(defun tty/drop-kth (list k)
  (let ((drop)
	(tail (nthcdr k list)))
    (dotimes (_ (- k 1) (nconc (nreverse drop) tail))
      (push (car list) drop)
      (pop list))))

(tty/drop-kth '(a b c d) 2)
;; => (a c d)

(defun tty/drop-kth-ptr (list k)
  (let ((ptr (nthcdr (- k 2) list)))
    (cond ((= k 1)
	   (pop list)
	   list)
	  ((and (> k 1)
		(< k (+ (length list) 1)))
	   (setcdr ptr (cdr (cdr ptr)))
	   list)
	  (t
	   nil))))

(tty/drop-kth-ptr '(a b c d) 2)
;; => (a c d)
