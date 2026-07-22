(defun tty/flatten (list)
  (let (flatten)
    (while (consp list)
      (let ((item (pop list)))
        (while (consp item)
          (push (cdr item) list)
          (setq item (car item)))
	(if item (push item flatten))))
    (if list (push list flatten))
    (nreverse flatten)))

(tty/flatten '(a (b (c d) e)))
;; => (a b c d e)

(defun tty/flatten-rec (list)
  (if (eql list nil)
      nil
    (let ((head (car list)) (rest (cdr list)))
      (if (listp head)
	  (append (tty/flatten-rec head) (tty/flatten-rec rest))
	(append (cons head nil) (tty/flatten-rec rest))))))

(tty/flatten-rec '(a (b (c d) e)))
;; => (a b c d e)
